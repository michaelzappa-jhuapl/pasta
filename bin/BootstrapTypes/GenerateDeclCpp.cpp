/*
 * Copyright (c) 2021 Trail of Bits, Inc.
 */

#include <fstream>
#include <ostream>
#include <string>

#include "BootstrapConfig.h"
#include "Globals.h"
#include "Util.h"

extern void DefineCppMethods(std::ostream &os, const std::string &class_name,
                             uint32_t class_id);

// Generate `lib/AST/Decl.cpp`.
void GenerateDeclCpp(void) {
  std::ofstream os(kASTDeclCpp);

  os
      << "/*\n"
      << " * Copyright (c) 2021 Trail of Bits, Inc.\n"
      << " */\n\n"
      << "// This file is auto-generated.\n\n"
      << "#ifndef PASTA_IN_BOOTSTRAP\n"
      << "#include <pasta/AST/Decl.h>\n\n"
      << "#pragma clang diagnostic push\n"
      << "#pragma clang diagnostic ignored \"-Wimplicit-int-conversion\"\n"
      << "#pragma clang diagnostic ignored \"-Wsign-conversion\"\n"
      << "#pragma clang diagnostic ignored \"-Wshorten-64-to-32\"\n"
      << "#include <clang/AST/Decl.h>\n"
      << "#include <clang/AST/DeclCXX.h>\n"
      << "#include <clang/AST/DeclFriend.h>\n"
      << "#include <clang/AST/DeclObjC.h>\n"
      << "#include <clang/AST/DeclOpenMP.h>\n"
      << "#include <clang/AST/DeclTemplate.h>\n"
      << "#pragma clang diagnostic pop\n\n"
      << "#include \"AST.h\"\n\n"
      << "namespace pasta {\n\n"
      << "class DeclBuilder {\n"
      << " public:\n"
      << "  template <typename T, typename D>\n"
      << "  inline static T Create(std::shared_ptr<ASTImpl> ast_, const D *decl_) {\n"
      << "    return T(std::move(ast_), decl_);\n"
      << "  }\n"
      << "};\n\n"
      << "namespace {\n"
      << "// Return the PASTA `DeclKind` for a Clang `Decl`.\n"
      << "static DeclKind KindOfDecl(const clang::Decl *decl) {\n"
      << "  switch (decl->getKind()) {\n"
      << "#define ABSTRACT_DECL(DECL)\n"
      << "#define DECL(DERIVED, BASE) \\\n"
      << "    case clang::Decl::DERIVED: \\\n"
      << "      return DeclKind::k ## DERIVED;\n"
      << "#include <clang/AST/DeclNodes.inc>\n"
      << "  }\n"
      << "  __builtin_unreachable();\n"
      << "}\n\n"
      << "static const std::string_view kKindNames[] = {\n";

  for (const auto &name_ : gDeclNames) {
    llvm::StringRef name(name_);
    if (name != "Decl") {
      assert(name.endswith("Decl"));
      name = name.substr(0, name.size() - 4);
      os << "  \"" << name.str() << "\",\n";
    }
  }

  os
      << "};\n"
      << "}  // namespace\n\n"
      << "std::string_view Decl::KindName(void) const {\n"
      << "  return kKindNames[static_cast<unsigned>(kind)];\n"
      << "}\n\n";


  // Define them all.
  for (const auto &name : gTopologicallyOrderedDecls) {
    if (name == "DeclContext") {
      continue;
    }

    os
        << name << "::" << name << "(\n"
        << "    std::shared_ptr<ASTImpl> ast_,\n"
        << "    const ::clang::" << name << " *decl_)";

    // Dispatch to our hand-written constructor that takes the `DeclKind`.
    if (name == "Decl") {
      os << "\n    : Decl(std::move(ast_), decl_, KindOfDecl(decl_)) {}\n";

    // Dispatch to the base class constructor(s).
    } else {
      auto sep = "\n    : ";
      const auto &base_classes = gBaseClasses[name];
      auto prefix = base_classes.size() == 1u ? "std::move(" : "";
      auto suffix = base_classes.size() == 1u ? ")" : "";
      for (const auto &parent_class : base_classes) {
        if (parent_class != "DeclContext") {
          os << sep << parent_class << "(" << prefix << "ast_" << suffix
             << ", decl_)";
          sep = ",\n      ";
        }
      }
      os << " {}\n\n";
    }

    DefineCppMethods(os, name, gClassIDs[name]);
  }

  os
      << "}  // namespace pasta\n"
      << "#endif  // PASTA_IN_BOOTSTRAP\n";
}
