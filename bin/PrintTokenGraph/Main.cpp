/*
 * Copyright (c) 2021 Trail of Bits, Inc.
 */

#include <pasta/AST/AST.h>
#include <pasta/AST/Decl.h>
#include <pasta/AST/Printer.h>
#include <pasta/AST/Token.h>
#include <pasta/Compile/Command.h>
#include <pasta/Compile/Compiler.h>
#include <pasta/Compile/Job.h>
#include <pasta/Util/ArgumentVector.h>
#include <pasta/Util/File.h>
#include <pasta/Util/FileSystem.h>
#include <pasta/Util/Init.h>

#include <clang/AST/Decl.h>
#include <clang/AST/Type.h>
#include <clang/AST/Stmt.h>

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <unordered_set>

static std::string TokData(pasta::PrintedToken tok) {
  std::stringstream ss;
  for (auto ch : tok.Data()) {
    switch (ch) {
      case '<': ss << "&lt;"; break;
      case '>': ss << "&gt;"; break;
      case '"': ss << "&quot;"; break;
      case '\'': ss << "&apos;"; break;
      case '\n': ss << " "; break;
      case '&': ss << "&amp;"; break;
      default: ss << ch; break;
    }
  }
  return ss.str();
}

static void PrintTokenGraph(pasta::Decl tld) {
  auto tokens = pasta::PrintedTokenRange::Create(tld);
  if (tokens.empty()) {
    std::cerr
        << "Empty tokens for " << tld.KindName();
    if (pasta::Token loc = tld.Token()) {
      if (std::optional<pasta::FileToken> floc = loc.FileLocation()) {
        std::cerr
            << " at " << pasta::File::Containing(*floc).Path()
            << ":" << floc->Line() << ":" << floc->Column();
      }
    }
    std::cerr << std::endl;
    return;
  }

  static int x = 0;
  std::ofstream os("/tmp/tokens/" + std::to_string(x++) + ".dot");

  os
      << "digraph {\n"
      << "node [shape=none margin=0 nojustify=false labeljust=l font=courier];\n";

  const auto a = reinterpret_cast<uintptr_t>(tld.RawDecl());

  os
      << "tokens" << a
      << " [label=<<TABLE cellpadding=\"2\" cellspacing=\"0\" border=\"1\"><TR>";


  std::unordered_set<pasta::TokenContext> contexts;

  for (pasta::PrintedToken tok : tokens) {

    if (auto maybe_context = tok.Context()) {
      auto context = std::move(maybe_context.value());
      do {
        contexts.insert(context);
      } while (context.TryUpdateToParent());
    }

    os
        << "<TD port=\"t" << tok.Index() << "\">" << TokData(tok) << "</TD>";
  }

  os << "</TR></TABLE>>];\n";

  for (const auto &context : contexts) {
    auto bgcolor = "";
    auto kind_name = context.KindName();
    switch (context.Kind()) {
      case pasta::TokenContextKind::kInvalid:
        bgcolor = " bgcolor=\"red\"";
        kind_name = "?Invalid?";
        break;
      case pasta::TokenContextKind::kStmt:
        bgcolor = " bgcolor=\"aquamarine\"";
        kind_name = reinterpret_cast<const clang::Stmt *>(context.Data())->getStmtClassName();
        break;
      case pasta::TokenContextKind::kDecl:
        bgcolor = " bgcolor=\"antiquewhite\"";
        kind_name = reinterpret_cast<const clang::Decl *>(context.Data())->getDeclKindName();
        break;
      case pasta::TokenContextKind::kType:
        bgcolor = " bgcolor=\"cadetblue1\"";
        kind_name = reinterpret_cast<const clang::Type *>(context.Data())->getTypeClassName();
        break;
      case pasta::TokenContextKind::kTemplateParameterList:
        bgcolor = " bgcolor=\"chartreuse1\"";
        kind_name = "TemplateParameterList";
        break;
      case pasta::TokenContextKind::kTemplateArgument:
        bgcolor = " bgcolor=\"chocolate1\"";
        kind_name = "TemplateArgument";
        break;
      case pasta::TokenContextKind::kTypeConstraint:
        bgcolor = " bgcolor=\"deepskyblue2\"";
        kind_name = "TypeConstraint";
        break;
      case pasta::TokenContextKind::kAttr:
        bgcolor = " bgcolor=\"goldenrod1\"";
        kind_name = "Attr";
        break;
      case pasta::TokenContextKind::kString:
        bgcolor = " bgcolor=\"gainsboro\"";
        kind_name = reinterpret_cast<const char *>(context.Data());
        break;
      case pasta::TokenContextKind::kAlias:
        assert(false);
        bgcolor = " bgcolor=\"deepskyblue3\"";
        kind_name = "Alias";
        break;
    }

    os
        << "c" << a << '_' << context.Index()
        << " [label=<<TABLE cellpadding=\"2\" cellspacing=\"0\" "
        << "border=\"1\"><TR><TD" << bgcolor << ">";

    os << kind_name;

    os
        << "</TD></TR></TABLE>>];\n";

    if (auto parent_context = context.Parent()) {
      os
          << "c" << a << '_' << context.Index()
          << " -> c" << a << '_' << parent_context->Index()
          << ";\n";
    }


    if (auto alias_context = context.Aliasee()) {
      os
          << "c" << a << '_' << context.Index()
          << " -> c" << a << '_' << alias_context->Index()
          << " [style=dashed];\n";
    }
  }

  for (pasta::PrintedToken tok : tokens) {
    if (auto context = tok.Context()) {
      os
          << "tokens" << a
          << ":t" << tok.Index() << " -> c" << a << '_' << context->Index()
          << ";\n";
    }
  }

  os << "}\n";
}

// Visit all top-level declarations.
class TLDFinder final : public pasta::DeclVisitor {
 public:
  virtual ~TLDFinder(void) = default;

  void VisitDeclContext(const pasta::DeclContext &dc) {
    for (const auto &decl : dc.AlreadyLoadedDeclarations()) {
      Accept(decl);
    }
  }

  void VisitVarTemplateDecl(const pasta::VarTemplateDecl &tpl) final {
    for (pasta::VarTemplateSpecializationDecl decl : tpl.Specializations()) {
      VisitVarTemplateSpecializationDecl(decl);
    }
  }

  void VisitClassTemplateDecl(const pasta::ClassTemplateDecl &tpl) final {
    for (pasta::ClassTemplateSpecializationDecl decl : tpl.Specializations()) {
      VisitClassTemplateSpecializationDecl(decl);
    }
  }

  void VisitFunctionTemplateDecl(const pasta::FunctionTemplateDecl &tpl) final {
    for (pasta::FunctionDecl decl : tpl.Specializations()) {
      VisitFunctionDecl(decl);
    }
  }

  void VisitTranslationUnitDecl(const pasta::TranslationUnitDecl &decl) final {
    VisitDeclContext(decl);
  }

  void VisitNamespaceDecl(const pasta::NamespaceDecl &decl) final {
    VisitDeclContext(decl);
  }

  void VisitExternCContextDecl(const pasta::ExternCContextDecl &decl) final {
    VisitDeclContext(decl);
  }

  void VisitLinkageSpecDecl(const pasta::LinkageSpecDecl &decl) final {
    VisitDeclContext(decl);
  }

  void VisitDecl(const pasta::Decl &decl) final {
    PrintTokenGraph(decl);
  }
};

int main(int argc, char *argv[]) {
  if (2 > argc) {
    std::cout << "Usage: " << argv[0] << " COMPILE_COMMAND..."
              << std::endl;
    return EXIT_FAILURE;
  }

  pasta::InitPasta initializer;
  pasta::FileManager fm(pasta::FileSystem::CreateNative());
  auto maybe_compiler =
      pasta::Compiler::CreateHostCompiler(fm, pasta::TargetLanguage::kCXX);
  if (maybe_compiler.Failed()) {
    std::cout << maybe_compiler.TakeError() << std::endl;
    return EXIT_FAILURE;
  }

  auto maybe_cwd = maybe_compiler->FileSystem()->CurrentWorkingDirectory();
  if (maybe_cwd.Failed()) {
    std::cout << maybe_compiler.TakeError() << std::endl;
    return EXIT_FAILURE;
  }

  const pasta::ArgumentVector args(argc - 1, &argv[1]);
  auto maybe_command = pasta::CompileCommand::CreateFromArguments(
      args, maybe_cwd.TakeValue());
  if (maybe_command.Failed()) {
    std::cout << maybe_command.TakeError() << std::endl;
    return EXIT_FAILURE;
  }

  const auto command = std::move(*maybe_command);
  auto maybe_jobs = maybe_compiler->CreateJobsForCommand(command);
  if (maybe_jobs.Failed()) {
    std::cout << maybe_jobs.TakeError() << std::endl;
    return EXIT_FAILURE;
  }

  for (const auto &job : *maybe_jobs) {
    auto maybe_ast = job.Run();
    if (maybe_ast.Failed()) {
      std::cout << maybe_ast.TakeError() << std::endl;
      return EXIT_FAILURE;
    } else {
      TLDFinder finder;
      finder.Accept(maybe_ast->TranslationUnit());
    }
  }


  return EXIT_SUCCESS;
}
