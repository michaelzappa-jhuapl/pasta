/*
 * Copyright (c) 2021 Trail of Bits, Inc.
 */

// This file is auto-generated.

#include <pasta/AST/Decl.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wimplicit-int-conversion"
#pragma clang diagnostic ignored "-Wsign-conversion"
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#include <clang/AST/Decl.h>
#include <clang/AST/DeclCXX.h>
#include <clang/AST/DeclFriend.h>
#include <clang/AST/DeclObjC.h>
#include <clang/AST/DeclOpenMP.h>
#include <clang/AST/DeclTemplate.h>
#pragma clang diagnostic pop

#include "AST.h"

namespace pasta {
namespace {
// Return the PASTA `DeclKind` for a Clang `Decl`.
static DeclKind KindOfDecl(const clang::Decl *decl) {
  switch (decl->getKind()) {
#define ABSTRACT_DECL(DECL)
#define DECL(DERIVED, BASE) \
    case clang::Decl::DERIVED: \
      return DeclKind::k ## DERIVED;
#include <clang/AST/DeclNodes.inc>
  }
  __builtin_unreachable();
}

static const std::string_view kKindNames[] = {
  "AccessSpec",
  "Binding",
  "Block",
  "BuiltinTemplate",
  "CXXConstructor",
  "CXXConversion",
  "CXXDeductionGuide",
  "CXXDestructor",
  "CXXMethod",
  "CXXRecord",
  "Captured",
  "ClassScopeFunctionSpecialization",
  "ClassTemplate",
  "ClassTemplatePartialSpecialization",
  "ClassTemplateSpecialization",
  "Concept",
  "ConstructorUsingShadow",
  "Declarator",
  "Decomposition",
  "Empty",
  "EnumConstant",
  "Enum",
  "Export",
  "ExternCContext",
  "Field",
  "FileScopeAsm",
  "Friend",
  "FriendTemplate",
  "Function",
  "FunctionTemplate",
  "ImplicitParam",
  "Import",
  "IndirectField",
  "Label",
  "LifetimeExtendedTemporary",
  "LinkageSpec",
  "MSGuid",
  "MSProperty",
  "Named",
  "NamespaceAlias",
  "Namespace",
  "NonTypeTemplateParm",
  "OMPAllocate",
  "OMPCapturedExpr",
  "OMPDeclareMapper",
  "OMPDeclareReduction",
  "OMPRequires",
  "OMPThreadPrivate",
  "ObjCAtDefsField",
  "ObjCCategory",
  "ObjCCategoryImpl",
  "ObjCCompatibleAlias",
  "ObjCContainer",
  "ObjCImpl",
  "ObjCImplementation",
  "ObjCInterface",
  "ObjCIvar",
  "ObjCMethod",
  "ObjCProperty",
  "ObjCPropertyImpl",
  "ObjCProtocol",
  "ObjCTypeParam",
  "ParmVar",
  "PragmaComment",
  "PragmaDetectMismatch",
  "Record",
  "RedeclarableTemplate",
  "RequiresExprBody",
  "StaticAssert",
  "Tag",
  "Template",
  "TemplateTemplateParm",
  "TemplateTypeParm",
  "TranslationUnit",
  "TypeAlias",
  "TypeAliasTemplate",
  "Type",
  "Typedef",
  "TypedefName",
  "UnresolvedUsingTypename",
  "UnresolvedUsingValue",
  "Using",
  "UsingDirective",
  "UsingPack",
  "UsingShadow",
  "Value",
  "Var",
  "VarTemplate",
  "VarTemplatePartialSpecialization",
  "VarTemplateSpecialization",
};
}  // namespace

std::string_view Decl::KindName(void) const {
  return kKindNames[static_cast<unsigned>(kind)];
}

Decl::Decl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::Decl *decl_)
    : Decl(std::move(ast_), decl_, KindOfDecl(decl_)) {}
  // Attrs
AccessSpecifier Decl::Access(void) const {
  auto val = u.Decl->getAccess();
  return static_cast<::pasta::AccessSpecifier>(static_cast<unsigned int>(val));
}

AccessSpecifier Decl::AccessUnsafe(void) const {
  auto val = u.Decl->getAccessUnsafe();
  return static_cast<::pasta::AccessSpecifier>(static_cast<unsigned int>(val));
}

  // AsFunction
std::optional<::pasta::Token> Decl::BeginToken(void) const {
  auto val = u.Decl->getBeginLoc();
  return ast->TokenAt(val);
}

  // Body
  // CanonicalDecl
  // DeclContext
std::optional<::pasta::Token> Decl::EndToken(void) const {
  auto val = u.Decl->getEndLoc();
  return ast->TokenAt(val);
}

  // FriendObjectKind
uint32_t Decl::GlobalID(void) const {
  auto val = u.Decl->getGlobalID();
  return val;
}

uint32_t Decl::IdentifierNamespace(void) const {
  auto val = u.Decl->getIdentifierNamespace();
  return val;
}

  // ImportedOwningModule
  // LexicalDeclContext
  // LocalOwningModule
std::optional<::pasta::Token> Decl::Token(void) const {
  auto val = u.Decl->getLocation();
  return ast->TokenAt(val);
}

  // ModuleOwnershipKind
  // MostRecentDecl
  // NextDeclInContext
  // NonClosureContext
  // OwningModule
uint32_t Decl::OwningModuleID(void) const {
  auto val = u.Decl->getOwningModuleID();
  return val;
}

  // PreviousDecl
  // TokenRange
  // TranslationUnitDecl
bool Decl::HasAttrs(void) const {
  auto val = u.Decl->hasAttrs();
  return val;
}

bool Decl::HasBody(void) const {
  auto val = u.Decl->hasBody();
  return val;
}

bool Decl::HasOwningModule(void) const {
  auto val = u.Decl->hasOwningModule();
  return val;
}

bool Decl::HasTagIdentifierNamespace(void) const {
  auto val = u.Decl->hasTagIdentifierNamespace();
  return val;
}

bool Decl::IsCanonicalDecl(void) const {
  auto val = u.Decl->isCanonicalDecl();
  return val;
}

bool Decl::IsDefinedOutsideFunctionOrMethod(void) const {
  auto val = u.Decl->isDefinedOutsideFunctionOrMethod();
  return val;
}

bool Decl::IsDeprecated(void) const {
  auto val = u.Decl->isDeprecated();
  return val;
}

bool Decl::IsFirstDecl(void) const {
  auto val = u.Decl->isFirstDecl();
  return val;
}

bool Decl::IsFromASTFile(void) const {
  auto val = u.Decl->isFromASTFile();
  return val;
}

bool Decl::IsFunctionOrFunctionTemplate(void) const {
  auto val = u.Decl->isFunctionOrFunctionTemplate();
  return val;
}

bool Decl::IsImplicit(void) const {
  auto val = u.Decl->isImplicit();
  return val;
}

  // IsInIdentifierNamespace
bool Decl::IsInvalidDecl(void) const {
  auto val = u.Decl->isInvalidDecl();
  return val;
}

bool Decl::IsModulePrivate(void) const {
  auto val = u.Decl->isModulePrivate();
  return val;
}

bool Decl::IsTemplateParameter(void) const {
  auto val = u.Decl->isTemplateParameter();
  return val;
}

bool Decl::IsThisDeclarationReferenced(void) const {
  auto val = u.Decl->isThisDeclarationReferenced();
  return val;
}

bool Decl::IsTopLevelDeclInObjCContainer(void) const {
  auto val = u.Decl->isTopLevelDeclInObjCContainer();
  return val;
}

bool Decl::IsUnavailable(void) const {
  auto val = u.Decl->isUnavailable();
  return val;
}

bool Decl::IsUnconditionallyVisible(void) const {
  auto val = u.Decl->isUnconditionallyVisible();
  return val;
}

  // Redecls
EmptyDecl::EmptyDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::EmptyDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

ExportDecl::ExportDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ExportDecl *decl_)
    : Decl(ast_, decl_) {}

std::optional<::pasta::Token> ExportDecl::EndToken(void) const {
  auto val = u.ExportDecl->getEndLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> ExportDecl::ExportToken(void) const {
  auto val = u.ExportDecl->getExportLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> ExportDecl::RBraceToken(void) const {
  auto val = u.ExportDecl->getRBraceLoc();
  return ast->TokenAt(val);
}

  // TokenRange
bool ExportDecl::HasBraces(void) const {
  auto val = u.ExportDecl->hasBraces();
  return val;
}

ExternCContextDecl::ExternCContextDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ExternCContextDecl *decl_)
    : Decl(ast_, decl_) {}

FileScopeAsmDecl::FileScopeAsmDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::FileScopeAsmDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> FileScopeAsmDecl::AsmToken(void) const {
  auto val = u.FileScopeAsmDecl->getAsmLoc();
  return ast->TokenAt(val);
}

  // AsmString
std::optional<::pasta::Token> FileScopeAsmDecl::RParenToken(void) const {
  auto val = u.FileScopeAsmDecl->getRParenLoc();
  return ast->TokenAt(val);
}

  // TokenRange
FriendDecl::FriendDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::FriendDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // FriendDecl
std::optional<::pasta::Token> FriendDecl::FriendToken(void) const {
  auto val = u.FriendDecl->getFriendLoc();
  return ast->TokenAt(val);
}

  // FriendType
uint32_t FriendDecl::FriendTypeNumTemplateParameterLists(void) const {
  auto val = u.FriendDecl->getFriendTypeNumTemplateParameterLists();
  return val;
}

  // FriendTypeTemplateParameterList
  // TokenRange
bool FriendDecl::IsUnsupportedFriend(void) const {
  auto val = u.FriendDecl->isUnsupportedFriend();
  return val;
}

FriendTemplateDecl::FriendTemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::FriendTemplateDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // FriendDecl
std::optional<::pasta::Token> FriendTemplateDecl::FriendToken(void) const {
  auto val = u.FriendTemplateDecl->getFriendLoc();
  return ast->TokenAt(val);
}

  // FriendType
uint32_t FriendTemplateDecl::NumTemplateParameters(void) const {
  auto val = u.FriendTemplateDecl->getNumTemplateParameters();
  return val;
}

  // TemplateParameterList
ImportDecl::ImportDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ImportDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // ImportedModule
LifetimeExtendedTemporaryDecl::LifetimeExtendedTemporaryDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::LifetimeExtendedTemporaryDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // ChildrenExpr
  // ExtendingDecl
uint32_t LifetimeExtendedTemporaryDecl::ManglingNumber(void) const {
  auto val = u.LifetimeExtendedTemporaryDecl->getManglingNumber();
  return val;
}

  // TemporaryExpr
  // Value
LinkageSpecDecl::LinkageSpecDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::LinkageSpecDecl *decl_)
    : Decl(ast_, decl_) {}

std::optional<::pasta::Token> LinkageSpecDecl::EndToken(void) const {
  auto val = u.LinkageSpecDecl->getEndLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> LinkageSpecDecl::ExternToken(void) const {
  auto val = u.LinkageSpecDecl->getExternLoc();
  return ast->TokenAt(val);
}

  // Language
std::optional<::pasta::Token> LinkageSpecDecl::RBraceToken(void) const {
  auto val = u.LinkageSpecDecl->getRBraceLoc();
  return ast->TokenAt(val);
}

  // TokenRange
bool LinkageSpecDecl::HasBraces(void) const {
  auto val = u.LinkageSpecDecl->hasBraces();
  return val;
}

NamedDecl::NamedDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::NamedDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // DeclName
Linkage NamedDecl::FormalLinkage(void) const {
  auto val = u.NamedDecl->getFormalLinkage();
  return static_cast<::pasta::Linkage>(static_cast<unsigned char>(val));
}

  // Identifier
  // MostRecentDecl
std::string_view NamedDecl::Name(void) const {
  auto val = u.NamedDecl->getName();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return std::string_view();
  }
}

std::string NamedDecl::NameAsString(void) const {
  auto val = u.NamedDecl->getNameAsString();
  return val;
}

  // UnderlyingDecl
Visibility NamedDecl::Visibility(void) const {
  auto val = u.NamedDecl->getVisibility();
  return static_cast<::pasta::Visibility>(static_cast<unsigned int>(val));
}

bool NamedDecl::HasExternalFormalLinkage(void) const {
  auto val = u.NamedDecl->hasExternalFormalLinkage();
  return val;
}

bool NamedDecl::HasLinkageBeenComputed(void) const {
  auto val = u.NamedDecl->hasLinkageBeenComputed();
  return val;
}

bool NamedDecl::IsCXXClassMember(void) const {
  auto val = u.NamedDecl->isCXXClassMember();
  return val;
}

bool NamedDecl::IsExternallyDeclarable(void) const {
  auto val = u.NamedDecl->isExternallyDeclarable();
  return val;
}

bool NamedDecl::IsExternallyVisible(void) const {
  auto val = u.NamedDecl->isExternallyVisible();
  return val;
}

NamespaceAliasDecl::NamespaceAliasDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::NamespaceAliasDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> NamespaceAliasDecl::AliasToken(void) const {
  auto val = u.NamespaceAliasDecl->getAliasLoc();
  return ast->TokenAt(val);
}

  // AliasedNamespace
  // CanonicalDecl
  // Namespace
std::optional<::pasta::Token> NamespaceAliasDecl::NamespaceToken(void) const {
  auto val = u.NamespaceAliasDecl->getNamespaceLoc();
  return ast->TokenAt(val);
}

  // Qualifier
  // QualifierToken
  // TokenRange
std::optional<::pasta::Token> NamespaceAliasDecl::TargetNameToken(void) const {
  auto val = u.NamespaceAliasDecl->getTargetNameLoc();
  return ast->TokenAt(val);
}

NamespaceDecl::NamespaceDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::NamespaceDecl *decl_)
    : NamedDecl(ast_, decl_) {}

  // AnonymousNamespace
std::optional<::pasta::Token> NamespaceDecl::BeginToken(void) const {
  auto val = u.NamespaceDecl->getBeginLoc();
  return ast->TokenAt(val);
}

  // CanonicalDecl
std::optional<::pasta::Token> NamespaceDecl::RBraceToken(void) const {
  auto val = u.NamespaceDecl->getRBraceLoc();
  return ast->TokenAt(val);
}

  // TokenRange
bool NamespaceDecl::IsAnonymousNamespace(void) const {
  auto val = u.NamespaceDecl->isAnonymousNamespace();
  return val;
}

bool NamespaceDecl::IsInline(void) const {
  auto val = u.NamespaceDecl->isInline();
  return val;
}

OMPAllocateDecl::OMPAllocateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::OMPAllocateDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // Clauses
  // Varlists
OMPRequiresDecl::OMPRequiresDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::OMPRequiresDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // Clauses
OMPThreadPrivateDecl::OMPThreadPrivateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::OMPThreadPrivateDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // Varlists
ObjCCompatibleAliasDecl::ObjCCompatibleAliasDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCCompatibleAliasDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

  // ClassInterface
ObjCContainerDecl::ObjCContainerDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCContainerDecl *decl_)
    : NamedDecl(ast_, decl_) {}

  // Class_methods
  // Class_properties
  // CollectPropertiesToImplement
  // AtEndRange
std::optional<::pasta::Token> ObjCContainerDecl::AtStartToken(void) const {
  auto val = u.ObjCContainerDecl->getAtStartLoc();
  return ast->TokenAt(val);
}

  // ClassMethod
  // InstanceMethod
  // TokenRange
  // Instance_methods
  // Instance_properties
  // Methods
  // Properties
ObjCImplDecl::ObjCImplDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCImplDecl *decl_)
    : ObjCContainerDecl(std::move(ast_), decl_) {}

  // ClassInterface
  // Property_impls
ObjCImplementationDecl::ObjCImplementationDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCImplementationDecl *decl_)
    : ObjCImplDecl(std::move(ast_), decl_) {}

  // Identifier
std::optional<::pasta::Token> ObjCImplementationDecl::IvarLBraceToken(void) const {
  auto val = u.ObjCImplementationDecl->getIvarLBraceLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> ObjCImplementationDecl::IvarRBraceToken(void) const {
  auto val = u.ObjCImplementationDecl->getIvarRBraceLoc();
  return ast->TokenAt(val);
}

std::string_view ObjCImplementationDecl::Name(void) const {
  auto val = u.ObjCImplementationDecl->getName();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return std::string_view();
  }
}

std::string ObjCImplementationDecl::NameAsString(void) const {
  auto val = u.ObjCImplementationDecl->getNameAsString();
  return val;
}

uint32_t ObjCImplementationDecl::NumIvarInitializers(void) const {
  auto val = u.ObjCImplementationDecl->getNumIvarInitializers();
  return val;
}

  // SuperClass
std::optional<::pasta::Token> ObjCImplementationDecl::SuperClassToken(void) const {
  auto val = u.ObjCImplementationDecl->getSuperClassLoc();
  return ast->TokenAt(val);
}

bool ObjCImplementationDecl::HasDestructors(void) const {
  auto val = u.ObjCImplementationDecl->hasDestructors();
  return val;
}

bool ObjCImplementationDecl::HasNonZeroConstructors(void) const {
  auto val = u.ObjCImplementationDecl->hasNonZeroConstructors();
  return val;
}

  // Inits
  // Ivars
ObjCInterfaceDecl::ObjCInterfaceDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCInterfaceDecl *decl_)
    : ObjCContainerDecl(std::move(ast_), decl_) {}

  // All_referenced_protocols
bool ObjCInterfaceDecl::DeclaresOrInheritsDesignatedInitializers(void) const {
  auto val = u.ObjCInterfaceDecl->declaresOrInheritsDesignatedInitializers();
  return val;
}

  // CanonicalDecl
  // CategoryListRaw
  // CategoryMethod
  // Definition
std::optional<::pasta::Token> ObjCInterfaceDecl::EndOfDefinitionToken(void) const {
  auto val = u.ObjCInterfaceDecl->getEndOfDefinitionLoc();
  return ast->TokenAt(val);
}

  // ReferencedProtocols
  // TokenRange
  // SuperClassTInfo
  // SuperClassType
  // TypeForDecl
  // TypeParamListAsWritten
bool ObjCInterfaceDecl::HasDefinition(void) const {
  auto val = u.ObjCInterfaceDecl->hasDefinition();
  return val;
}

bool ObjCInterfaceDecl::IsImplicitInterfaceDecl(void) const {
  auto val = u.ObjCInterfaceDecl->isImplicitInterfaceDecl();
  return val;
}

  // IsSuperClassOf
bool ObjCInterfaceDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.ObjCInterfaceDecl->isThisDeclarationADefinition();
  return val;
}

  // Ivars
  // Known_categories
  // Known_extensions
  // LookupClassMethod
  // LookupInstanceMethod
  // LookupPropertyAccessor
  // Protocol_locs
  // Protocols
  // Visible_categories
  // Visible_extensions
ObjCMethodDecl::ObjCMethodDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCMethodDecl *decl_)
    : NamedDecl(ast_, decl_) {}

std::optional<::pasta::Token> ObjCMethodDecl::BeginToken(void) const {
  auto val = u.ObjCMethodDecl->getBeginLoc();
  return ast->TokenAt(val);
}

  // CanonicalDecl
  // ClassInterface
  // CmdDecl
std::optional<::pasta::Token> ObjCMethodDecl::DeclaratorEndToken(void) const {
  auto val = u.ObjCMethodDecl->getDeclaratorEndLoc();
  return ast->TokenAt(val);
}

  // ImplementationControl
uint32_t ObjCMethodDecl::NumSelectorLocs(void) const {
  auto val = u.ObjCMethodDecl->getNumSelectorLocs();
  return val;
}

  // ObjCDeclQualifier
  // ParamDecl
  // ReturnType
  // ReturnTypeSourceInfo
  // Selector
  // SelectorToken
std::optional<::pasta::Token> ObjCMethodDecl::SelectorStartToken(void) const {
  auto val = u.ObjCMethodDecl->getSelectorStartLoc();
  return ast->TokenAt(val);
}

  // SelfDecl
  // TokenRange
bool ObjCMethodDecl::HasBody(void) const {
  auto val = u.ObjCMethodDecl->hasBody();
  return val;
}

bool ObjCMethodDecl::HasRedeclaration(void) const {
  auto val = u.ObjCMethodDecl->hasRedeclaration();
  return val;
}

bool ObjCMethodDecl::HasRelatedResultType(void) const {
  auto val = u.ObjCMethodDecl->hasRelatedResultType();
  return val;
}

bool ObjCMethodDecl::HasSkippedBody(void) const {
  auto val = u.ObjCMethodDecl->hasSkippedBody();
  return val;
}

bool ObjCMethodDecl::IsClassMethod(void) const {
  auto val = u.ObjCMethodDecl->isClassMethod();
  return val;
}

bool ObjCMethodDecl::IsDefined(void) const {
  auto val = u.ObjCMethodDecl->isDefined();
  return val;
}

bool ObjCMethodDecl::IsInstanceMethod(void) const {
  auto val = u.ObjCMethodDecl->isInstanceMethod();
  return val;
}

bool ObjCMethodDecl::IsOptional(void) const {
  auto val = u.ObjCMethodDecl->isOptional();
  return val;
}

bool ObjCMethodDecl::IsOverriding(void) const {
  auto val = u.ObjCMethodDecl->isOverriding();
  return val;
}

bool ObjCMethodDecl::IsPropertyAccessor(void) const {
  auto val = u.ObjCMethodDecl->isPropertyAccessor();
  return val;
}

bool ObjCMethodDecl::IsRedeclaration(void) const {
  auto val = u.ObjCMethodDecl->isRedeclaration();
  return val;
}

bool ObjCMethodDecl::IsSynthesizedAccessorStub(void) const {
  auto val = u.ObjCMethodDecl->isSynthesizedAccessorStub();
  return val;
}

bool ObjCMethodDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.ObjCMethodDecl->isThisDeclarationADefinition();
  return val;
}

bool ObjCMethodDecl::IsVariadic(void) const {
  auto val = u.ObjCMethodDecl->isVariadic();
  return val;
}

  // Parameters
ObjCPropertyDecl::ObjCPropertyDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCPropertyDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> ObjCPropertyDecl::AtToken(void) const {
  auto val = u.ObjCPropertyDecl->getAtLoc();
  return ast->TokenAt(val);
}

  // GetterMethodDecl
  // GetterName
std::optional<::pasta::Token> ObjCPropertyDecl::GetterNameToken(void) const {
  auto val = u.ObjCPropertyDecl->getGetterNameLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> ObjCPropertyDecl::LParenToken(void) const {
  auto val = u.ObjCPropertyDecl->getLParenLoc();
  return ast->TokenAt(val);
}

  // PropertyAttributes
  // PropertyAttributesAsWritten
  // PropertyImplementation
  // PropertyIvarDecl
ObjCPropertyQueryKind ObjCPropertyDecl::QueryKind(void) const {
  auto val = u.ObjCPropertyDecl->getQueryKind();
  return static_cast<::pasta::ObjCPropertyQueryKind>(static_cast<unsigned char>(val));
}

  // SetterKind
  // SetterMethodDecl
  // SetterName
std::optional<::pasta::Token> ObjCPropertyDecl::SetterNameToken(void) const {
  auto val = u.ObjCPropertyDecl->getSetterNameLoc();
  return ast->TokenAt(val);
}

  // TokenRange
  // Type
  // TypeSourceInfo
bool ObjCPropertyDecl::IsAtomic(void) const {
  auto val = u.ObjCPropertyDecl->isAtomic();
  return val;
}

bool ObjCPropertyDecl::IsClassProperty(void) const {
  auto val = u.ObjCPropertyDecl->isClassProperty();
  return val;
}

bool ObjCPropertyDecl::IsDirectProperty(void) const {
  auto val = u.ObjCPropertyDecl->isDirectProperty();
  return val;
}

bool ObjCPropertyDecl::IsInstanceProperty(void) const {
  auto val = u.ObjCPropertyDecl->isInstanceProperty();
  return val;
}

bool ObjCPropertyDecl::IsOptional(void) const {
  auto val = u.ObjCPropertyDecl->isOptional();
  return val;
}

bool ObjCPropertyDecl::IsReadOnly(void) const {
  auto val = u.ObjCPropertyDecl->isReadOnly();
  return val;
}

bool ObjCPropertyDecl::IsRetaining(void) const {
  auto val = u.ObjCPropertyDecl->isRetaining();
  return val;
}

ObjCPropertyImplDecl::ObjCPropertyImplDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCPropertyImplDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> ObjCPropertyImplDecl::BeginToken(void) const {
  auto val = u.ObjCPropertyImplDecl->getBeginLoc();
  return ast->TokenAt(val);
}

  // GetterCXXConstructor
  // GetterMethodDecl
  // PropertyDecl
  // PropertyImplementation
  // PropertyIvarDecl
std::optional<::pasta::Token> ObjCPropertyImplDecl::PropertyIvarDeclToken(void) const {
  auto val = u.ObjCPropertyImplDecl->getPropertyIvarDeclLoc();
  return ast->TokenAt(val);
}

  // SetterCXXAssignment
  // SetterMethodDecl
bool ObjCPropertyImplDecl::IsIvarNameSpecified(void) const {
  auto val = u.ObjCPropertyImplDecl->isIvarNameSpecified();
  return val;
}

ObjCProtocolDecl::ObjCProtocolDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCProtocolDecl *decl_)
    : ObjCContainerDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // Definition
  // ReferencedProtocols
  // TokenRange
bool ObjCProtocolDecl::HasDefinition(void) const {
  auto val = u.ObjCProtocolDecl->hasDefinition();
  return val;
}

bool ObjCProtocolDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.ObjCProtocolDecl->isThisDeclarationADefinition();
  return val;
}

  // LookupClassMethod
  // LookupInstanceMethod
  // Protocol_locs
  // Protocols
PragmaCommentDecl::PragmaCommentDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::PragmaCommentDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

std::string_view PragmaCommentDecl::Arg(void) const {
  auto val = u.PragmaCommentDecl->getArg();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return std::string_view();
  }
}

PragmaMSCommentKind PragmaCommentDecl::CommentKind(void) const {
  auto val = u.PragmaCommentDecl->getCommentKind();
  return static_cast<::pasta::PragmaMSCommentKind>(static_cast<unsigned int>(val));
}

PragmaDetectMismatchDecl::PragmaDetectMismatchDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::PragmaDetectMismatchDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

std::string_view PragmaDetectMismatchDecl::Name(void) const {
  auto val = u.PragmaDetectMismatchDecl->getName();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return std::string_view();
  }
}

std::string_view PragmaDetectMismatchDecl::Value(void) const {
  auto val = u.PragmaDetectMismatchDecl->getValue();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return std::string_view();
  }
}

RequiresExprBodyDecl::RequiresExprBodyDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::RequiresExprBodyDecl *decl_)
    : Decl(ast_, decl_) {}

StaticAssertDecl::StaticAssertDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::StaticAssertDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // AssertExpr
  // Message
std::optional<::pasta::Token> StaticAssertDecl::RParenToken(void) const {
  auto val = u.StaticAssertDecl->getRParenLoc();
  return ast->TokenAt(val);
}

  // TokenRange
bool StaticAssertDecl::IsFailed(void) const {
  auto val = u.StaticAssertDecl->isFailed();
  return val;
}

TemplateDecl::TemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TemplateDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

  // TokenRange
  // TemplateParameters
  // TemplatedDecl
TemplateTemplateParmDecl::TemplateTemplateParmDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TemplateTemplateParmDecl *decl_)
    : TemplateDecl(std::move(ast_), decl_) {}

bool TemplateTemplateParmDecl::DefaultArgumentWasInherited(void) const {
  auto val = u.TemplateTemplateParmDecl->defaultArgumentWasInherited();
  return val;
}

  // DefaultArgStorage
  // DefaultArgument
  // ExpansionTemplateParameters
uint32_t TemplateTemplateParmDecl::NumExpansionTemplateParameters(void) const {
  auto val = u.TemplateTemplateParmDecl->getNumExpansionTemplateParameters();
  return val;
}

  // TokenRange
bool TemplateTemplateParmDecl::HasDefaultArgument(void) const {
  auto val = u.TemplateTemplateParmDecl->hasDefaultArgument();
  return val;
}

bool TemplateTemplateParmDecl::IsExpandedParameterPack(void) const {
  auto val = u.TemplateTemplateParmDecl->isExpandedParameterPack();
  return val;
}

bool TemplateTemplateParmDecl::IsPackExpansion(void) const {
  auto val = u.TemplateTemplateParmDecl->isPackExpansion();
  return val;
}

bool TemplateTemplateParmDecl::IsParameterPack(void) const {
  auto val = u.TemplateTemplateParmDecl->isParameterPack();
  return val;
}

TranslationUnitDecl::TranslationUnitDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TranslationUnitDecl *decl_)
    : Decl(ast_, decl_) {}

  // ASTContext
  // AnonymousNamespace
TypeDecl::TypeDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TypeDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> TypeDecl::BeginToken(void) const {
  auto val = u.TypeDecl->getBeginLoc();
  return ast->TokenAt(val);
}

  // TokenRange
  // TypeForDecl
TypedefNameDecl::TypedefNameDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TypedefNameDecl *decl_)
    : TypeDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // TypeSourceInfo
  // UnderlyingType
bool TypedefNameDecl::IsModed(void) const {
  auto val = u.TypedefNameDecl->isModed();
  return val;
}

bool TypedefNameDecl::IsTransparentTag(void) const {
  auto val = u.TypedefNameDecl->isTransparentTag();
  return val;
}

UnresolvedUsingTypenameDecl::UnresolvedUsingTypenameDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::UnresolvedUsingTypenameDecl *decl_)
    : TypeDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
std::optional<::pasta::Token> UnresolvedUsingTypenameDecl::EllipsisToken(void) const {
  auto val = u.UnresolvedUsingTypenameDecl->getEllipsisLoc();
  return ast->TokenAt(val);
}

  // NameInfo
  // Qualifier
  // QualifierToken
std::optional<::pasta::Token> UnresolvedUsingTypenameDecl::TypenameToken(void) const {
  auto val = u.UnresolvedUsingTypenameDecl->getTypenameLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> UnresolvedUsingTypenameDecl::UsingToken(void) const {
  auto val = u.UnresolvedUsingTypenameDecl->getUsingLoc();
  return ast->TokenAt(val);
}

bool UnresolvedUsingTypenameDecl::IsPackExpansion(void) const {
  auto val = u.UnresolvedUsingTypenameDecl->isPackExpansion();
  return val;
}

UsingDecl::UsingDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::UsingDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // NameInfo
  // Qualifier
  // QualifierToken
std::optional<::pasta::Token> UsingDecl::UsingToken(void) const {
  auto val = u.UsingDecl->getUsingLoc();
  return ast->TokenAt(val);
}

bool UsingDecl::HasTypename(void) const {
  auto val = u.UsingDecl->hasTypename();
  return val;
}

bool UsingDecl::IsAccessDeclaration(void) const {
  auto val = u.UsingDecl->isAccessDeclaration();
  return val;
}

  // Shadows
UsingDirectiveDecl::UsingDirectiveDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::UsingDirectiveDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

  // CommonAncestor
std::optional<::pasta::Token> UsingDirectiveDecl::IdentLocation(void) const {
  auto val = u.UsingDirectiveDecl->getIdentLocation();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> UsingDirectiveDecl::NamespaceKeyLocation(void) const {
  auto val = u.UsingDirectiveDecl->getNamespaceKeyLocation();
  return ast->TokenAt(val);
}

  // NominatedNamespace
  // NominatedNamespaceAsWritten
  // Qualifier
  // QualifierToken
  // TokenRange
std::optional<::pasta::Token> UsingDirectiveDecl::UsingToken(void) const {
  auto val = u.UsingDirectiveDecl->getUsingLoc();
  return ast->TokenAt(val);
}

UsingPackDecl::UsingPackDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::UsingPackDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

  // Expansions
  // CanonicalDecl
  // InstantiatedFromUsingDecl
  // TokenRange
UsingShadowDecl::UsingShadowDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::UsingShadowDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // NextUsingShadowDecl
  // TargetDecl
ValueDecl::ValueDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ValueDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

  // Type
AccessSpecDecl::AccessSpecDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::AccessSpecDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> AccessSpecDecl::AccessSpecifierToken(void) const {
  auto val = u.AccessSpecDecl->getAccessSpecifierLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> AccessSpecDecl::ColonToken(void) const {
  auto val = u.AccessSpecDecl->getColonLoc();
  return ast->TokenAt(val);
}

  // TokenRange
BindingDecl::BindingDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::BindingDecl *decl_)
    : ValueDecl(std::move(ast_), decl_) {}

  // Binding
BlockDecl::BlockDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::BlockDecl *decl_)
    : Decl(ast_, decl_) {}

bool BlockDecl::BlockMissingReturnType(void) const {
  auto val = u.BlockDecl->blockMissingReturnType();
  return val;
}

bool BlockDecl::CanAvoidCopyToHeap(void) const {
  auto val = u.BlockDecl->canAvoidCopyToHeap();
  return val;
}

  // Captures
bool BlockDecl::CapturesCXXThis(void) const {
  auto val = u.BlockDecl->capturesCXXThis();
  return val;
}

bool BlockDecl::DoesNotEscape(void) const {
  auto val = u.BlockDecl->doesNotEscape();
  return val;
}

  // BlockManglingContextDecl
uint32_t BlockDecl::BlockManglingNumber(void) const {
  auto val = u.BlockDecl->getBlockManglingNumber();
  return val;
}

  // Body
std::optional<::pasta::Token> BlockDecl::CaretLocation(void) const {
  auto val = u.BlockDecl->getCaretLocation();
  return ast->TokenAt(val);
}

  // CompoundBody
uint32_t BlockDecl::NumCaptures(void) const {
  auto val = u.BlockDecl->getNumCaptures();
  return val;
}

uint32_t BlockDecl::NumParams(void) const {
  auto val = u.BlockDecl->getNumParams();
  return val;
}

  // ParamDecl
  // SignatureAsWritten
bool BlockDecl::HasCaptures(void) const {
  auto val = u.BlockDecl->hasCaptures();
  return val;
}

bool BlockDecl::IsConversionFromLambda(void) const {
  auto val = u.BlockDecl->isConversionFromLambda();
  return val;
}

bool BlockDecl::IsVariadic(void) const {
  auto val = u.BlockDecl->isVariadic();
  return val;
}

  // Parameters
BuiltinTemplateDecl::BuiltinTemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::BuiltinTemplateDecl *decl_)
    : TemplateDecl(std::move(ast_), decl_) {}

  // BuiltinTemplateKind
  // TokenRange
CapturedDecl::CapturedDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::CapturedDecl *decl_)
    : Decl(ast_, decl_) {}

  // ContextParam
uint32_t CapturedDecl::ContextParamPosition(void) const {
  auto val = u.CapturedDecl->getContextParamPosition();
  return val;
}

uint32_t CapturedDecl::NumParams(void) const {
  auto val = u.CapturedDecl->getNumParams();
  return val;
}

  // Param
  // Parameters
ClassScopeFunctionSpecializationDecl::ClassScopeFunctionSpecializationDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ClassScopeFunctionSpecializationDecl *decl_)
    : Decl(std::move(ast_), decl_) {}

  // Specialization
  // TemplateArgsAsWritten
bool ClassScopeFunctionSpecializationDecl::HasExplicitTemplateArgs(void) const {
  auto val = u.ClassScopeFunctionSpecializationDecl->hasExplicitTemplateArgs();
  return val;
}

ConceptDecl::ConceptDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ConceptDecl *decl_)
    : TemplateDecl(std::move(ast_), decl_) {}

  // ConstraintExpr
  // TokenRange
bool ConceptDecl::IsTypeConcept(void) const {
  auto val = u.ConceptDecl->isTypeConcept();
  return val;
}

ConstructorUsingShadowDecl::ConstructorUsingShadowDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ConstructorUsingShadowDecl *decl_)
    : UsingShadowDecl(std::move(ast_), decl_) {}

bool ConstructorUsingShadowDecl::ConstructsVirtualBase(void) const {
  auto val = u.ConstructorUsingShadowDecl->constructsVirtualBase();
  return val;
}

  // ConstructedBaseClass
  // ConstructedBaseClassShadowDecl
  // NominatedBaseClassShadowDecl
  // Parent
DeclaratorDecl::DeclaratorDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::DeclaratorDecl *decl_)
    : ValueDecl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> DeclaratorDecl::BeginToken(void) const {
  auto val = u.DeclaratorDecl->getBeginLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> DeclaratorDecl::InnerLocStart(void) const {
  auto val = u.DeclaratorDecl->getInnerLocStart();
  return ast->TokenAt(val);
}

uint32_t DeclaratorDecl::NumTemplateParameterLists(void) const {
  auto val = u.DeclaratorDecl->getNumTemplateParameterLists();
  return val;
}

  // Qualifier
  // QualifierToken
  // TemplateParameterList
  // TrailingRequiresClause
  // TypeSourceInfo
EnumConstantDecl::EnumConstantDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::EnumConstantDecl *decl_)
    : ValueDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // InitExpr
  // InitVal
FieldDecl::FieldDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::FieldDecl *decl_)
    : DeclaratorDecl(std::move(ast_), decl_) {}

  // BitWidth
  // CanonicalDecl
  // CapturedVLAType
InClassInitStyle FieldDecl::InClassInitStyle(void) const {
  auto val = u.FieldDecl->getInClassInitStyle();
  return static_cast<::pasta::InClassInitStyle>(static_cast<unsigned int>(val));
}

  // InClassInitializer
  // Parent
bool FieldDecl::HasCapturedVLAType(void) const {
  auto val = u.FieldDecl->hasCapturedVLAType();
  return val;
}

bool FieldDecl::HasInClassInitializer(void) const {
  auto val = u.FieldDecl->hasInClassInitializer();
  return val;
}

bool FieldDecl::IsBitField(void) const {
  auto val = u.FieldDecl->isBitField();
  return val;
}

bool FieldDecl::IsMutable(void) const {
  auto val = u.FieldDecl->isMutable();
  return val;
}

bool FieldDecl::IsUnnamedBitfield(void) const {
  auto val = u.FieldDecl->isUnnamedBitfield();
  return val;
}

FunctionDecl::FunctionDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::FunctionDecl *decl_)
    : DeclaratorDecl(ast_, decl_) {}

bool FunctionDecl::DoesThisDeclarationHaveABody(void) const {
  auto val = u.FunctionDecl->doesThisDeclarationHaveABody();
  return val;
}

  // AssociatedConstraints
  // Body
  // CallResultType
  // CanonicalDecl
ConstexprSpecKind FunctionDecl::ConstexprKind(void) const {
  auto val = u.FunctionDecl->getConstexprKind();
  return static_cast<::pasta::ConstexprSpecKind>(static_cast<unsigned int>(val));
}

  // DeclaredReturnType
  // Definition
std::optional<::pasta::Token> FunctionDecl::EllipsisToken(void) const {
  auto val = u.FunctionDecl->getEllipsisLoc();
  return ast->TokenAt(val);
}

ExceptionSpecificationType FunctionDecl::ExceptionSpecType(void) const {
  auto val = u.FunctionDecl->getExceptionSpecType();
  return static_cast<::pasta::ExceptionSpecificationType>(static_cast<unsigned int>(val));
}

  // NameInfo
  // ParamDecl
  // ReturnType
StorageClass FunctionDecl::StorageClass(void) const {
  auto val = u.FunctionDecl->getStorageClass();
  return static_cast<::pasta::StorageClass>(static_cast<unsigned int>(val));
}

bool FunctionDecl::HasBody(void) const {
  auto val = u.FunctionDecl->hasBody();
  return val;
}

bool FunctionDecl::HasImplicitReturnZero(void) const {
  auto val = u.FunctionDecl->hasImplicitReturnZero();
  return val;
}

bool FunctionDecl::HasInheritedPrototype(void) const {
  auto val = u.FunctionDecl->hasInheritedPrototype();
  return val;
}

bool FunctionDecl::HasPrototype(void) const {
  auto val = u.FunctionDecl->hasPrototype();
  return val;
}

bool FunctionDecl::HasSkippedBody(void) const {
  auto val = u.FunctionDecl->hasSkippedBody();
  return val;
}

bool FunctionDecl::HasWrittenPrototype(void) const {
  auto val = u.FunctionDecl->hasWrittenPrototype();
  return val;
}

bool FunctionDecl::InstantiationIsPending(void) const {
  auto val = u.FunctionDecl->instantiationIsPending();
  return val;
}

bool FunctionDecl::IsConsteval(void) const {
  auto val = u.FunctionDecl->isConsteval();
  return val;
}

bool FunctionDecl::IsConstexpr(void) const {
  auto val = u.FunctionDecl->isConstexpr();
  return val;
}

bool FunctionDecl::IsConstexprSpecified(void) const {
  auto val = u.FunctionDecl->isConstexprSpecified();
  return val;
}

bool FunctionDecl::IsDefaulted(void) const {
  auto val = u.FunctionDecl->isDefaulted();
  return val;
}

bool FunctionDecl::IsDefined(void) const {
  auto val = u.FunctionDecl->isDefined();
  return val;
}

bool FunctionDecl::IsDeleted(void) const {
  auto val = u.FunctionDecl->isDeleted();
  return val;
}

bool FunctionDecl::IsDeletedAsWritten(void) const {
  auto val = u.FunctionDecl->isDeletedAsWritten();
  return val;
}

bool FunctionDecl::IsExplicitlyDefaulted(void) const {
  auto val = u.FunctionDecl->isExplicitlyDefaulted();
  return val;
}

bool FunctionDecl::IsFunctionTemplateSpecialization(void) const {
  auto val = u.FunctionDecl->isFunctionTemplateSpecialization();
  return val;
}

bool FunctionDecl::IsInlineSpecified(void) const {
  auto val = u.FunctionDecl->isInlineSpecified();
  return val;
}

bool FunctionDecl::IsInlined(void) const {
  auto val = u.FunctionDecl->isInlined();
  return val;
}

bool FunctionDecl::IsLateTemplateParsed(void) const {
  auto val = u.FunctionDecl->isLateTemplateParsed();
  return val;
}

bool FunctionDecl::IsMultiVersion(void) const {
  auto val = u.FunctionDecl->isMultiVersion();
  return val;
}

bool FunctionDecl::IsOverloadedOperator(void) const {
  auto val = u.FunctionDecl->isOverloadedOperator();
  return val;
}

bool FunctionDecl::IsPure(void) const {
  auto val = u.FunctionDecl->isPure();
  return val;
}

bool FunctionDecl::IsStatic(void) const {
  auto val = u.FunctionDecl->isStatic();
  return val;
}

bool FunctionDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.FunctionDecl->isThisDeclarationADefinition();
  return val;
}

bool FunctionDecl::IsTrivial(void) const {
  auto val = u.FunctionDecl->isTrivial();
  return val;
}

bool FunctionDecl::IsTrivialForCall(void) const {
  auto val = u.FunctionDecl->isTrivialForCall();
  return val;
}

bool FunctionDecl::IsUserProvided(void) const {
  auto val = u.FunctionDecl->isUserProvided();
  return val;
}

bool FunctionDecl::IsVirtualAsWritten(void) const {
  auto val = u.FunctionDecl->isVirtualAsWritten();
  return val;
}

  // Parameters
bool FunctionDecl::UsesFPIntrin(void) const {
  auto val = u.FunctionDecl->usesFPIntrin();
  return val;
}

bool FunctionDecl::UsesSEHTry(void) const {
  auto val = u.FunctionDecl->usesSEHTry();
  return val;
}

bool FunctionDecl::WillHaveBody(void) const {
  auto val = u.FunctionDecl->willHaveBody();
  return val;
}

IndirectFieldDecl::IndirectFieldDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::IndirectFieldDecl *decl_)
    : ValueDecl(std::move(ast_), decl_) {}

  // Chain
  // AnonField
  // CanonicalDecl
uint32_t IndirectFieldDecl::ChainingSize(void) const {
  auto val = u.IndirectFieldDecl->getChainingSize();
  return val;
}

  // VarDecl
LabelDecl::LabelDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::LabelDecl *decl_)
    : NamedDecl(std::move(ast_), decl_) {}

std::string_view LabelDecl::MSAsmLabel(void) const {
  auto val = u.LabelDecl->getMSAsmLabel();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return std::string_view();
  }
}

  // TokenRange
  // Stmt
bool LabelDecl::IsGnuLocal(void) const {
  auto val = u.LabelDecl->isGnuLocal();
  return val;
}

bool LabelDecl::IsMSAsmLabel(void) const {
  auto val = u.LabelDecl->isMSAsmLabel();
  return val;
}

bool LabelDecl::IsResolvedMSAsmLabel(void) const {
  auto val = u.LabelDecl->isResolvedMSAsmLabel();
  return val;
}

MSGuidDecl::MSGuidDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::MSGuidDecl *decl_)
    : ValueDecl(std::move(ast_), decl_) {}

  // Parts
MSPropertyDecl::MSPropertyDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::MSPropertyDecl *decl_)
    : DeclaratorDecl(std::move(ast_), decl_) {}

  // GetterId
  // SetterId
bool MSPropertyDecl::HasGetter(void) const {
  auto val = u.MSPropertyDecl->hasGetter();
  return val;
}

bool MSPropertyDecl::HasSetter(void) const {
  auto val = u.MSPropertyDecl->hasSetter();
  return val;
}

NonTypeTemplateParmDecl::NonTypeTemplateParmDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::NonTypeTemplateParmDecl *decl_)
    : DeclaratorDecl(std::move(ast_), decl_) {}

bool NonTypeTemplateParmDecl::DefaultArgumentWasInherited(void) const {
  auto val = u.NonTypeTemplateParmDecl->defaultArgumentWasInherited();
  return val;
}

  // AssociatedConstraints
  // DefaultArgStorage
  // DefaultArgument
  // ExpansionType
  // ExpansionTypeSourceInfo
uint32_t NonTypeTemplateParmDecl::NumExpansionTypes(void) const {
  auto val = u.NonTypeTemplateParmDecl->getNumExpansionTypes();
  return val;
}

  // PlaceholderTypeConstraint
bool NonTypeTemplateParmDecl::HasDefaultArgument(void) const {
  auto val = u.NonTypeTemplateParmDecl->hasDefaultArgument();
  return val;
}

bool NonTypeTemplateParmDecl::HasPlaceholderTypeConstraint(void) const {
  auto val = u.NonTypeTemplateParmDecl->hasPlaceholderTypeConstraint();
  return val;
}

bool NonTypeTemplateParmDecl::IsExpandedParameterPack(void) const {
  auto val = u.NonTypeTemplateParmDecl->isExpandedParameterPack();
  return val;
}

bool NonTypeTemplateParmDecl::IsPackExpansion(void) const {
  auto val = u.NonTypeTemplateParmDecl->isPackExpansion();
  return val;
}

bool NonTypeTemplateParmDecl::IsParameterPack(void) const {
  auto val = u.NonTypeTemplateParmDecl->isParameterPack();
  return val;
}

OMPDeclareMapperDecl::OMPDeclareMapperDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::OMPDeclareMapperDecl *decl_)
    : ValueDecl(ast_, decl_) {}

  // Clauses
  // MapperVarRef
OMPDeclareReductionDecl::OMPDeclareReductionDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::OMPDeclareReductionDecl *decl_)
    : ValueDecl(ast_, decl_) {}

  // Combiner
  // CombinerIn
  // CombinerOut
  // InitOrig
  // InitPriv
  // Initializer
  // InitializerKind
ObjCAtDefsFieldDecl::ObjCAtDefsFieldDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCAtDefsFieldDecl *decl_)
    : FieldDecl(std::move(ast_), decl_) {}

ObjCCategoryDecl::ObjCCategoryDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCCategoryDecl *decl_)
    : ObjCContainerDecl(std::move(ast_), decl_) {}

bool ObjCCategoryDecl::IsClassExtension(void) const {
  auto val = u.ObjCCategoryDecl->IsClassExtension();
  return val;
}

std::optional<::pasta::Token> ObjCCategoryDecl::CategoryNameToken(void) const {
  auto val = u.ObjCCategoryDecl->getCategoryNameLoc();
  return ast->TokenAt(val);
}

  // ClassInterface
std::optional<::pasta::Token> ObjCCategoryDecl::IvarLBraceToken(void) const {
  auto val = u.ObjCCategoryDecl->getIvarLBraceLoc();
  return ast->TokenAt(val);
}

std::optional<::pasta::Token> ObjCCategoryDecl::IvarRBraceToken(void) const {
  auto val = u.ObjCCategoryDecl->getIvarRBraceLoc();
  return ast->TokenAt(val);
}

  // NextClassCategory
  // NextClassCategoryRaw
  // ReferencedProtocols
  // TypeParamList
  // Ivars
  // Protocol_locs
  // Protocols
ObjCCategoryImplDecl::ObjCCategoryImplDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCCategoryImplDecl *decl_)
    : ObjCImplDecl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> ObjCCategoryImplDecl::CategoryNameToken(void) const {
  auto val = u.ObjCCategoryImplDecl->getCategoryNameLoc();
  return ast->TokenAt(val);
}

ObjCIvarDecl::ObjCIvarDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCIvarDecl *decl_)
    : FieldDecl(std::move(ast_), decl_) {}

  // AccessControl
  // CanonicalAccessControl
  // NextIvar
bool ObjCIvarDecl::Synthesize(void) const {
  auto val = u.ObjCIvarDecl->getSynthesize();
  return val;
}

ObjCTypeParamDecl::ObjCTypeParamDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ObjCTypeParamDecl *decl_)
    : TypedefNameDecl(std::move(ast_), decl_) {}

std::optional<::pasta::Token> ObjCTypeParamDecl::ColonToken(void) const {
  auto val = u.ObjCTypeParamDecl->getColonLoc();
  return ast->TokenAt(val);
}

uint32_t ObjCTypeParamDecl::Index(void) const {
  auto val = u.ObjCTypeParamDecl->getIndex();
  return val;
}

ObjCTypeParamVariance ObjCTypeParamDecl::Variance(void) const {
  auto val = u.ObjCTypeParamDecl->getVariance();
  return static_cast<::pasta::ObjCTypeParamVariance>(static_cast<unsigned char>(val));
}

std::optional<::pasta::Token> ObjCTypeParamDecl::VarianceToken(void) const {
  auto val = u.ObjCTypeParamDecl->getVarianceLoc();
  return ast->TokenAt(val);
}

bool ObjCTypeParamDecl::HasExplicitBound(void) const {
  auto val = u.ObjCTypeParamDecl->hasExplicitBound();
  return val;
}

RedeclarableTemplateDecl::RedeclarableTemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::RedeclarableTemplateDecl *decl_)
    : TemplateDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
bool RedeclarableTemplateDecl::IsMemberSpecialization(void) const {
  auto val = u.RedeclarableTemplateDecl->isMemberSpecialization();
  return val;
}

TagDecl::TagDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TagDecl *decl_)
    : TypeDecl(ast_, decl_) {}

  // BraceRange
  // CanonicalDecl
std::optional<::pasta::Token> TagDecl::InnerLocStart(void) const {
  auto val = u.TagDecl->getInnerLocStart();
  return ast->TokenAt(val);
}

std::string_view TagDecl::KindName(void) const {
  auto val = u.TagDecl->getKindName();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return std::string_view();
  }
}

uint32_t TagDecl::NumTemplateParameterLists(void) const {
  auto val = u.TagDecl->getNumTemplateParameterLists();
  return val;
}

  // Qualifier
  // QualifierToken
TagTypeKind TagDecl::TagKind(void) const {
  auto val = u.TagDecl->getTagKind();
  return static_cast<::pasta::TagTypeKind>(static_cast<unsigned int>(val));
}

  // TemplateParameterList
  // TypedefNameForAnonDecl
bool TagDecl::HasNameForLinkage(void) const {
  auto val = u.TagDecl->hasNameForLinkage();
  return val;
}

bool TagDecl::IsBeingDefined(void) const {
  auto val = u.TagDecl->isBeingDefined();
  return val;
}

bool TagDecl::IsClass(void) const {
  auto val = u.TagDecl->isClass();
  return val;
}

bool TagDecl::IsCompleteDefinition(void) const {
  auto val = u.TagDecl->isCompleteDefinition();
  return val;
}

bool TagDecl::IsCompleteDefinitionRequired(void) const {
  auto val = u.TagDecl->isCompleteDefinitionRequired();
  return val;
}

bool TagDecl::IsDependentType(void) const {
  auto val = u.TagDecl->isDependentType();
  return val;
}

bool TagDecl::IsEmbeddedInDeclarator(void) const {
  auto val = u.TagDecl->isEmbeddedInDeclarator();
  return val;
}

bool TagDecl::IsEnum(void) const {
  auto val = u.TagDecl->isEnum();
  return val;
}

bool TagDecl::IsFreeStanding(void) const {
  auto val = u.TagDecl->isFreeStanding();
  return val;
}

bool TagDecl::IsInterface(void) const {
  auto val = u.TagDecl->isInterface();
  return val;
}

bool TagDecl::IsStruct(void) const {
  auto val = u.TagDecl->isStruct();
  return val;
}

bool TagDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.TagDecl->isThisDeclarationADefinition();
  return val;
}

bool TagDecl::IsUnion(void) const {
  auto val = u.TagDecl->isUnion();
  return val;
}

bool TagDecl::MayHaveOutOfDateDef(void) const {
  auto val = u.TagDecl->mayHaveOutOfDateDef();
  return val;
}

TemplateTypeParmDecl::TemplateTypeParmDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TemplateTypeParmDecl *decl_)
    : TypeDecl(std::move(ast_), decl_) {}

bool TemplateTypeParmDecl::DefaultArgumentWasInherited(void) const {
  auto val = u.TemplateTypeParmDecl->defaultArgumentWasInherited();
  return val;
}

  // AssociatedConstraints
  // DefaultArgStorage
  // DefaultArgument
  // DefaultArgumentInfo
uint32_t TemplateTypeParmDecl::NumExpansionParameters(void) const {
  auto val = u.TemplateTypeParmDecl->getNumExpansionParameters();
  return val;
}

  // TypeConstraint
bool TemplateTypeParmDecl::HasDefaultArgument(void) const {
  auto val = u.TemplateTypeParmDecl->hasDefaultArgument();
  return val;
}

bool TemplateTypeParmDecl::HasTypeConstraint(void) const {
  auto val = u.TemplateTypeParmDecl->hasTypeConstraint();
  return val;
}

bool TemplateTypeParmDecl::IsExpandedParameterPack(void) const {
  auto val = u.TemplateTypeParmDecl->isExpandedParameterPack();
  return val;
}

bool TemplateTypeParmDecl::IsPackExpansion(void) const {
  auto val = u.TemplateTypeParmDecl->isPackExpansion();
  return val;
}

bool TemplateTypeParmDecl::WasDeclaredWithTypename(void) const {
  auto val = u.TemplateTypeParmDecl->wasDeclaredWithTypename();
  return val;
}

TypeAliasDecl::TypeAliasDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TypeAliasDecl *decl_)
    : TypedefNameDecl(std::move(ast_), decl_) {}

  // DescribedAliasTemplate
TypeAliasTemplateDecl::TypeAliasTemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TypeAliasTemplateDecl *decl_)
    : RedeclarableTemplateDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // PreviousDecl
  // TemplatedDecl
TypedefDecl::TypedefDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::TypedefDecl *decl_)
    : TypedefNameDecl(std::move(ast_), decl_) {}

UnresolvedUsingValueDecl::UnresolvedUsingValueDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::UnresolvedUsingValueDecl *decl_)
    : ValueDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
std::optional<::pasta::Token> UnresolvedUsingValueDecl::EllipsisToken(void) const {
  auto val = u.UnresolvedUsingValueDecl->getEllipsisLoc();
  return ast->TokenAt(val);
}

  // NameInfo
  // Qualifier
  // QualifierToken
std::optional<::pasta::Token> UnresolvedUsingValueDecl::UsingToken(void) const {
  auto val = u.UnresolvedUsingValueDecl->getUsingLoc();
  return ast->TokenAt(val);
}

bool UnresolvedUsingValueDecl::IsAccessDeclaration(void) const {
  auto val = u.UnresolvedUsingValueDecl->isAccessDeclaration();
  return val;
}

bool UnresolvedUsingValueDecl::IsPackExpansion(void) const {
  auto val = u.UnresolvedUsingValueDecl->isPackExpansion();
  return val;
}

VarDecl::VarDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::VarDecl *decl_)
    : DeclaratorDecl(std::move(ast_), decl_) {}

  // ActingDefinition
  // AnyInitializer
  // CanonicalDecl
  // Init
  // InitStyle
  // InitializingDeclaration
StorageClass VarDecl::StorageClass(void) const {
  auto val = u.VarDecl->getStorageClass();
  return static_cast<::pasta::StorageClass>(static_cast<unsigned int>(val));
}

StorageDuration VarDecl::StorageDuration(void) const {
  auto val = u.VarDecl->getStorageDuration();
  return static_cast<::pasta::StorageDuration>(static_cast<unsigned int>(val));
}

ThreadStorageClassSpecifier VarDecl::TSCSpec(void) const {
  auto val = u.VarDecl->getTSCSpec();
  return static_cast<::pasta::ThreadStorageClassSpecifier>(static_cast<unsigned int>(val));
}

  // HasDefinition
bool VarDecl::HasExternalStorage(void) const {
  auto val = u.VarDecl->hasExternalStorage();
  return val;
}

bool VarDecl::HasGlobalStorage(void) const {
  auto val = u.VarDecl->hasGlobalStorage();
  return val;
}

bool VarDecl::HasLocalStorage(void) const {
  auto val = u.VarDecl->hasLocalStorage();
  return val;
}

bool VarDecl::IsARCPseudoStrong(void) const {
  auto val = u.VarDecl->isARCPseudoStrong();
  return val;
}

bool VarDecl::IsCXXForRangeDecl(void) const {
  auto val = u.VarDecl->isCXXForRangeDecl();
  return val;
}

bool VarDecl::IsConstexpr(void) const {
  auto val = u.VarDecl->isConstexpr();
  return val;
}

bool VarDecl::IsDirectInit(void) const {
  auto val = u.VarDecl->isDirectInit();
  return val;
}

bool VarDecl::IsExceptionVariable(void) const {
  auto val = u.VarDecl->isExceptionVariable();
  return val;
}

bool VarDecl::IsFileVarDecl(void) const {
  auto val = u.VarDecl->isFileVarDecl();
  return val;
}

bool VarDecl::IsFunctionOrMethodVarDecl(void) const {
  auto val = u.VarDecl->isFunctionOrMethodVarDecl();
  return val;
}

bool VarDecl::IsInitCapture(void) const {
  auto val = u.VarDecl->isInitCapture();
  return val;
}

bool VarDecl::IsInline(void) const {
  auto val = u.VarDecl->isInline();
  return val;
}

bool VarDecl::IsInlineSpecified(void) const {
  auto val = u.VarDecl->isInlineSpecified();
  return val;
}

bool VarDecl::IsLocalVarDecl(void) const {
  auto val = u.VarDecl->isLocalVarDecl();
  return val;
}

bool VarDecl::IsLocalVarDeclOrParm(void) const {
  auto val = u.VarDecl->isLocalVarDeclOrParm();
  return val;
}

bool VarDecl::IsNRVOVariable(void) const {
  auto val = u.VarDecl->isNRVOVariable();
  return val;
}

bool VarDecl::IsObjCForDecl(void) const {
  auto val = u.VarDecl->isObjCForDecl();
  return val;
}

bool VarDecl::IsPreviousDeclInSameBlockScope(void) const {
  auto val = u.VarDecl->isPreviousDeclInSameBlockScope();
  return val;
}

bool VarDecl::IsStaticDataMember(void) const {
  auto val = u.VarDecl->isStaticDataMember();
  return val;
}

bool VarDecl::IsStaticLocal(void) const {
  auto val = u.VarDecl->isStaticLocal();
  return val;
}

  // IsThisDeclarationADefinition
bool VarDecl::IsThisDeclarationADemotedDefinition(void) const {
  auto val = u.VarDecl->isThisDeclarationADemotedDefinition();
  return val;
}

VarTemplateDecl::VarTemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::VarTemplateDecl *decl_)
    : RedeclarableTemplateDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // MostRecentDecl
  // PreviousDecl
  // TemplatedDecl
bool VarTemplateDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.VarTemplateDecl->isThisDeclarationADefinition();
  return val;
}

  // Specializations
VarTemplateSpecializationDecl::VarTemplateSpecializationDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::VarTemplateSpecializationDecl *decl_)
    : VarDecl(std::move(ast_), decl_) {}

  // Profile
std::optional<::pasta::Token> VarTemplateSpecializationDecl::ExternToken(void) const {
  auto val = u.VarTemplateSpecializationDecl->getExternLoc();
  return ast->TokenAt(val);
}

  // InstantiatedFrom
std::optional<::pasta::Token> VarTemplateSpecializationDecl::PointOfInstantiation(void) const {
  auto val = u.VarTemplateSpecializationDecl->getPointOfInstantiation();
  return ast->TokenAt(val);
}

TemplateSpecializationKind VarTemplateSpecializationDecl::SpecializationKind(void) const {
  auto val = u.VarTemplateSpecializationDecl->getSpecializationKind();
  return static_cast<::pasta::TemplateSpecializationKind>(static_cast<unsigned int>(val));
}

  // SpecializedTemplateOrPartial
  // TemplateArgs
  // TemplateArgsInfo
  // TemplateInstantiationArgs
std::optional<::pasta::Token> VarTemplateSpecializationDecl::TemplateKeywordToken(void) const {
  auto val = u.VarTemplateSpecializationDecl->getTemplateKeywordLoc();
  return ast->TokenAt(val);
}

  // TypeAsWritten
bool VarTemplateSpecializationDecl::IsClassScopeExplicitSpecialization(void) const {
  auto val = u.VarTemplateSpecializationDecl->isClassScopeExplicitSpecialization();
  return val;
}

bool VarTemplateSpecializationDecl::IsExplicitInstantiationOrSpecialization(void) const {
  auto val = u.VarTemplateSpecializationDecl->isExplicitInstantiationOrSpecialization();
  return val;
}

bool VarTemplateSpecializationDecl::IsExplicitSpecialization(void) const {
  auto val = u.VarTemplateSpecializationDecl->isExplicitSpecialization();
  return val;
}

CXXDeductionGuideDecl::CXXDeductionGuideDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::CXXDeductionGuideDecl *decl_)
    : FunctionDecl(std::move(ast_), decl_) {}

  // DeducedTemplate
  // ExplicitSpecifier
bool CXXDeductionGuideDecl::IsCopyDeductionCandidate(void) const {
  auto val = u.CXXDeductionGuideDecl->isCopyDeductionCandidate();
  return val;
}

bool CXXDeductionGuideDecl::IsExplicit(void) const {
  auto val = u.CXXDeductionGuideDecl->isExplicit();
  return val;
}

CXXMethodDecl::CXXMethodDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::CXXMethodDecl *decl_)
    : FunctionDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // CorrespondingMethodDeclaredInClass
  // CorrespondingMethodInClass
  // DevirtualizedMethod
  // MethodQualifiers
  // MostRecentDecl
  // Parent
RefQualifierKind CXXMethodDecl::RefQualifier(void) const {
  auto val = u.CXXMethodDecl->getRefQualifier();
  return static_cast<::pasta::RefQualifierKind>(static_cast<unsigned int>(val));
}

bool CXXMethodDecl::IsConst(void) const {
  auto val = u.CXXMethodDecl->isConst();
  return val;
}

bool CXXMethodDecl::IsInstance(void) const {
  auto val = u.CXXMethodDecl->isInstance();
  return val;
}

bool CXXMethodDecl::IsVirtual(void) const {
  auto val = u.CXXMethodDecl->isVirtual();
  return val;
}

bool CXXMethodDecl::IsVolatile(void) const {
  auto val = u.CXXMethodDecl->isVolatile();
  return val;
}

ClassTemplateDecl::ClassTemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ClassTemplateDecl *decl_)
    : RedeclarableTemplateDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // MostRecentDecl
  // PreviousDecl
  // TemplatedDecl
bool ClassTemplateDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.ClassTemplateDecl->isThisDeclarationADefinition();
  return val;
}

  // Specializations
DecompositionDecl::DecompositionDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::DecompositionDecl *decl_)
    : VarDecl(std::move(ast_), decl_) {}

  // Bindings
EnumDecl::EnumDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::EnumDecl *decl_)
    : TagDecl(std::move(ast_), decl_) {}

  // Enumerators
  // CanonicalDecl
  // Definition
  // IntegerType
  // IntegerTypeSourceInfo
  // MemberSpecializationInfo
  // MostRecentDecl
uint32_t EnumDecl::NumNegativeBits(void) const {
  auto val = u.EnumDecl->getNumNegativeBits();
  return val;
}

uint32_t EnumDecl::NumPositiveBits(void) const {
  auto val = u.EnumDecl->getNumPositiveBits();
  return val;
}

  // PreviousDecl
  // PromotionType
bool EnumDecl::IsComplete(void) const {
  auto val = u.EnumDecl->isComplete();
  return val;
}

bool EnumDecl::IsFixed(void) const {
  auto val = u.EnumDecl->isFixed();
  return val;
}

bool EnumDecl::IsScoped(void) const {
  auto val = u.EnumDecl->isScoped();
  return val;
}

bool EnumDecl::IsScopedUsingClassTag(void) const {
  auto val = u.EnumDecl->isScopedUsingClassTag();
  return val;
}

FunctionTemplateDecl::FunctionTemplateDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::FunctionTemplateDecl *decl_)
    : RedeclarableTemplateDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // MostRecentDecl
  // PreviousDecl
  // TemplatedDecl
bool FunctionTemplateDecl::IsAbbreviated(void) const {
  auto val = u.FunctionTemplateDecl->isAbbreviated();
  return val;
}

bool FunctionTemplateDecl::IsThisDeclarationADefinition(void) const {
  auto val = u.FunctionTemplateDecl->isThisDeclarationADefinition();
  return val;
}

  // Specializations
ImplicitParamDecl::ImplicitParamDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ImplicitParamDecl *decl_)
    : VarDecl(std::move(ast_), decl_) {}

  // ParameterKind
OMPCapturedExprDecl::OMPCapturedExprDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::OMPCapturedExprDecl *decl_)
    : VarDecl(std::move(ast_), decl_) {}

ParmVarDecl::ParmVarDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ParmVarDecl *decl_)
    : VarDecl(std::move(ast_), decl_) {}

  // DefaultArg
uint32_t ParmVarDecl::FunctionScopeDepth(void) const {
  auto val = u.ParmVarDecl->getFunctionScopeDepth();
  return val;
}

uint32_t ParmVarDecl::FunctionScopeIndex(void) const {
  auto val = u.ParmVarDecl->getFunctionScopeIndex();
  return val;
}

  // ObjCDeclQualifier
  // UninstantiatedDefaultArg
bool ParmVarDecl::HasInheritedDefaultArg(void) const {
  auto val = u.ParmVarDecl->hasInheritedDefaultArg();
  return val;
}

bool ParmVarDecl::HasUninstantiatedDefaultArg(void) const {
  auto val = u.ParmVarDecl->hasUninstantiatedDefaultArg();
  return val;
}

bool ParmVarDecl::HasUnparsedDefaultArg(void) const {
  auto val = u.ParmVarDecl->hasUnparsedDefaultArg();
  return val;
}

bool ParmVarDecl::IsKNRPromoted(void) const {
  auto val = u.ParmVarDecl->isKNRPromoted();
  return val;
}

bool ParmVarDecl::IsObjCMethodParameter(void) const {
  auto val = u.ParmVarDecl->isObjCMethodParameter();
  return val;
}

RecordDecl::RecordDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::RecordDecl *decl_)
    : TagDecl(std::move(ast_), decl_) {}

bool RecordDecl::CanPassInRegisters(void) const {
  auto val = u.RecordDecl->canPassInRegisters();
  return val;
}

  // Fields
  // ArgPassingRestrictions
  // Definition
  // MostRecentDecl
  // PreviousDecl
bool RecordDecl::HasFlexibleArrayMember(void) const {
  auto val = u.RecordDecl->hasFlexibleArrayMember();
  return val;
}

bool RecordDecl::HasLoadedFieldsFromExternalStorage(void) const {
  auto val = u.RecordDecl->hasLoadedFieldsFromExternalStorage();
  return val;
}

bool RecordDecl::HasNonTrivialToPrimitiveCopyCUnion(void) const {
  auto val = u.RecordDecl->hasNonTrivialToPrimitiveCopyCUnion();
  return val;
}

bool RecordDecl::HasNonTrivialToPrimitiveDefaultInitializeCUnion(void) const {
  auto val = u.RecordDecl->hasNonTrivialToPrimitiveDefaultInitializeCUnion();
  return val;
}

bool RecordDecl::HasNonTrivialToPrimitiveDestructCUnion(void) const {
  auto val = u.RecordDecl->hasNonTrivialToPrimitiveDestructCUnion();
  return val;
}

bool RecordDecl::HasObjectMember(void) const {
  auto val = u.RecordDecl->hasObjectMember();
  return val;
}

bool RecordDecl::HasVolatileMember(void) const {
  auto val = u.RecordDecl->hasVolatileMember();
  return val;
}

bool RecordDecl::IsAnonymousStructOrUnion(void) const {
  auto val = u.RecordDecl->isAnonymousStructOrUnion();
  return val;
}

bool RecordDecl::IsNonTrivialToPrimitiveCopy(void) const {
  auto val = u.RecordDecl->isNonTrivialToPrimitiveCopy();
  return val;
}

bool RecordDecl::IsNonTrivialToPrimitiveDefaultInitialize(void) const {
  auto val = u.RecordDecl->isNonTrivialToPrimitiveDefaultInitialize();
  return val;
}

bool RecordDecl::IsNonTrivialToPrimitiveDestroy(void) const {
  auto val = u.RecordDecl->isNonTrivialToPrimitiveDestroy();
  return val;
}

bool RecordDecl::IsParamDestroyedInCallee(void) const {
  auto val = u.RecordDecl->isParamDestroyedInCallee();
  return val;
}

VarTemplatePartialSpecializationDecl::VarTemplatePartialSpecializationDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::VarTemplatePartialSpecializationDecl *decl_)
    : VarTemplateSpecializationDecl(std::move(ast_), decl_) {}

  // Profile
  // AssociatedConstraints
  // InstantiatedFromMember
  // TemplateArgsAsWritten
  // TemplateParameters
bool VarTemplatePartialSpecializationDecl::HasAssociatedConstraints(void) const {
  auto val = u.VarTemplatePartialSpecializationDecl->hasAssociatedConstraints();
  return val;
}

CXXConstructorDecl::CXXConstructorDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::CXXConstructorDecl *decl_)
    : CXXMethodDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // ExplicitSpecifier
  // InheritedConstructor
uint32_t CXXConstructorDecl::NumCtorInitializers(void) const {
  auto val = u.CXXConstructorDecl->getNumCtorInitializers();
  return val;
}

  // Inits
bool CXXConstructorDecl::IsCopyConstructor(void) const {
  auto val = u.CXXConstructorDecl->isCopyConstructor();
  return val;
}

bool CXXConstructorDecl::IsCopyOrMoveConstructor(void) const {
  auto val = u.CXXConstructorDecl->isCopyOrMoveConstructor();
  return val;
}

bool CXXConstructorDecl::IsDelegatingConstructor(void) const {
  auto val = u.CXXConstructorDecl->isDelegatingConstructor();
  return val;
}

bool CXXConstructorDecl::IsExplicit(void) const {
  auto val = u.CXXConstructorDecl->isExplicit();
  return val;
}

bool CXXConstructorDecl::IsInheritingConstructor(void) const {
  auto val = u.CXXConstructorDecl->isInheritingConstructor();
  return val;
}

bool CXXConstructorDecl::IsMoveConstructor(void) const {
  auto val = u.CXXConstructorDecl->isMoveConstructor();
  return val;
}

CXXConversionDecl::CXXConversionDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::CXXConversionDecl *decl_)
    : CXXMethodDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // ConversionType
  // ExplicitSpecifier
bool CXXConversionDecl::IsExplicit(void) const {
  auto val = u.CXXConversionDecl->isExplicit();
  return val;
}

CXXDestructorDecl::CXXDestructorDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::CXXDestructorDecl *decl_)
    : CXXMethodDecl(std::move(ast_), decl_) {}

  // CanonicalDecl
  // OperatorDelete
  // OperatorDeleteThisArg
CXXRecordDecl::CXXRecordDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::CXXRecordDecl *decl_)
    : RecordDecl(std::move(ast_), decl_) {}

bool CXXRecordDecl::AllowConstDefaultInit(void) const {
  auto val = u.CXXRecordDecl->allowConstDefaultInit();
  return val;
}

  // Bases
  // Captures
  // Constructors
bool CXXRecordDecl::DefaultedCopyConstructorIsDeleted(void) const {
  auto val = u.CXXRecordDecl->defaultedCopyConstructorIsDeleted();
  return val;
}

bool CXXRecordDecl::DefaultedDefaultConstructorIsConstexpr(void) const {
  auto val = u.CXXRecordDecl->defaultedDefaultConstructorIsConstexpr();
  return val;
}

bool CXXRecordDecl::DefaultedDestructorIsConstexpr(void) const {
  auto val = u.CXXRecordDecl->defaultedDestructorIsConstexpr();
  return val;
}

bool CXXRecordDecl::DefaultedDestructorIsDeleted(void) const {
  auto val = u.CXXRecordDecl->defaultedDestructorIsDeleted();
  return val;
}

bool CXXRecordDecl::DefaultedMoveConstructorIsDeleted(void) const {
  auto val = u.CXXRecordDecl->defaultedMoveConstructorIsDeleted();
  return val;
}

  // Friends
  // CanonicalDecl
  // Definition
LambdaCaptureDefault CXXRecordDecl::LambdaCaptureDefault(void) const {
  auto val = u.CXXRecordDecl->getLambdaCaptureDefault();
  return static_cast<::pasta::LambdaCaptureDefault>(static_cast<unsigned int>(val));
}

uint32_t CXXRecordDecl::LambdaManglingNumber(void) const {
  auto val = u.CXXRecordDecl->getLambdaManglingNumber();
  return val;
}

  // LambdaTypeInfo
  // MostRecentDecl
  // MostRecentNonInjectedDecl
uint32_t CXXRecordDecl::NumBases(void) const {
  auto val = u.CXXRecordDecl->getNumBases();
  return val;
}

uint32_t CXXRecordDecl::NumVBases(void) const {
  auto val = u.CXXRecordDecl->getNumVBases();
  return val;
}

  // PreviousDecl
bool CXXRecordDecl::HasConstexprDefaultConstructor(void) const {
  auto val = u.CXXRecordDecl->hasConstexprDefaultConstructor();
  return val;
}

bool CXXRecordDecl::HasConstexprNonCopyMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->hasConstexprNonCopyMoveConstructor();
  return val;
}

bool CXXRecordDecl::HasCopyAssignmentWithConstParam(void) const {
  auto val = u.CXXRecordDecl->hasCopyAssignmentWithConstParam();
  return val;
}

bool CXXRecordDecl::HasCopyConstructorWithConstParam(void) const {
  auto val = u.CXXRecordDecl->hasCopyConstructorWithConstParam();
  return val;
}

bool CXXRecordDecl::HasDefaultConstructor(void) const {
  auto val = u.CXXRecordDecl->hasDefaultConstructor();
  return val;
}

bool CXXRecordDecl::HasDefinition(void) const {
  auto val = u.CXXRecordDecl->hasDefinition();
  return val;
}

bool CXXRecordDecl::HasDirectFields(void) const {
  auto val = u.CXXRecordDecl->hasDirectFields();
  return val;
}

bool CXXRecordDecl::HasFriends(void) const {
  auto val = u.CXXRecordDecl->hasFriends();
  return val;
}

bool CXXRecordDecl::HasInClassInitializer(void) const {
  auto val = u.CXXRecordDecl->hasInClassInitializer();
  return val;
}

bool CXXRecordDecl::HasInheritedAssignment(void) const {
  auto val = u.CXXRecordDecl->hasInheritedAssignment();
  return val;
}

bool CXXRecordDecl::HasInheritedConstructor(void) const {
  auto val = u.CXXRecordDecl->hasInheritedConstructor();
  return val;
}

bool CXXRecordDecl::HasIrrelevantDestructor(void) const {
  auto val = u.CXXRecordDecl->hasIrrelevantDestructor();
  return val;
}

bool CXXRecordDecl::HasKnownLambdaInternalLinkage(void) const {
  auto val = u.CXXRecordDecl->hasKnownLambdaInternalLinkage();
  return val;
}

bool CXXRecordDecl::HasMoveAssignment(void) const {
  auto val = u.CXXRecordDecl->hasMoveAssignment();
  return val;
}

bool CXXRecordDecl::HasMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->hasMoveConstructor();
  return val;
}

bool CXXRecordDecl::HasMutableFields(void) const {
  auto val = u.CXXRecordDecl->hasMutableFields();
  return val;
}

bool CXXRecordDecl::HasNonLiteralTypeFieldsOrBases(void) const {
  auto val = u.CXXRecordDecl->hasNonLiteralTypeFieldsOrBases();
  return val;
}

bool CXXRecordDecl::HasNonTrivialCopyAssignment(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialCopyAssignment();
  return val;
}

bool CXXRecordDecl::HasNonTrivialCopyConstructor(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialCopyConstructor();
  return val;
}

bool CXXRecordDecl::HasNonTrivialCopyConstructorForCall(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialCopyConstructorForCall();
  return val;
}

bool CXXRecordDecl::HasNonTrivialDefaultConstructor(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialDefaultConstructor();
  return val;
}

bool CXXRecordDecl::HasNonTrivialDestructor(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialDestructor();
  return val;
}

bool CXXRecordDecl::HasNonTrivialDestructorForCall(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialDestructorForCall();
  return val;
}

bool CXXRecordDecl::HasNonTrivialMoveAssignment(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialMoveAssignment();
  return val;
}

bool CXXRecordDecl::HasNonTrivialMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialMoveConstructor();
  return val;
}

bool CXXRecordDecl::HasNonTrivialMoveConstructorForCall(void) const {
  auto val = u.CXXRecordDecl->hasNonTrivialMoveConstructorForCall();
  return val;
}

bool CXXRecordDecl::HasPrivateFields(void) const {
  auto val = u.CXXRecordDecl->hasPrivateFields();
  return val;
}

bool CXXRecordDecl::HasProtectedFields(void) const {
  auto val = u.CXXRecordDecl->hasProtectedFields();
  return val;
}

bool CXXRecordDecl::HasSimpleCopyAssignment(void) const {
  auto val = u.CXXRecordDecl->hasSimpleCopyAssignment();
  return val;
}

bool CXXRecordDecl::HasSimpleCopyConstructor(void) const {
  auto val = u.CXXRecordDecl->hasSimpleCopyConstructor();
  return val;
}

bool CXXRecordDecl::HasSimpleDestructor(void) const {
  auto val = u.CXXRecordDecl->hasSimpleDestructor();
  return val;
}

bool CXXRecordDecl::HasSimpleMoveAssignment(void) const {
  auto val = u.CXXRecordDecl->hasSimpleMoveAssignment();
  return val;
}

bool CXXRecordDecl::HasSimpleMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->hasSimpleMoveConstructor();
  return val;
}

bool CXXRecordDecl::HasTrivialCopyAssignment(void) const {
  auto val = u.CXXRecordDecl->hasTrivialCopyAssignment();
  return val;
}

bool CXXRecordDecl::HasTrivialCopyConstructor(void) const {
  auto val = u.CXXRecordDecl->hasTrivialCopyConstructor();
  return val;
}

bool CXXRecordDecl::HasTrivialCopyConstructorForCall(void) const {
  auto val = u.CXXRecordDecl->hasTrivialCopyConstructorForCall();
  return val;
}

bool CXXRecordDecl::HasTrivialDefaultConstructor(void) const {
  auto val = u.CXXRecordDecl->hasTrivialDefaultConstructor();
  return val;
}

bool CXXRecordDecl::HasTrivialDestructor(void) const {
  auto val = u.CXXRecordDecl->hasTrivialDestructor();
  return val;
}

bool CXXRecordDecl::HasTrivialDestructorForCall(void) const {
  auto val = u.CXXRecordDecl->hasTrivialDestructorForCall();
  return val;
}

bool CXXRecordDecl::HasTrivialMoveAssignment(void) const {
  auto val = u.CXXRecordDecl->hasTrivialMoveAssignment();
  return val;
}

bool CXXRecordDecl::HasTrivialMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->hasTrivialMoveConstructor();
  return val;
}

bool CXXRecordDecl::HasTrivialMoveConstructorForCall(void) const {
  auto val = u.CXXRecordDecl->hasTrivialMoveConstructorForCall();
  return val;
}

bool CXXRecordDecl::HasUninitializedReferenceMember(void) const {
  auto val = u.CXXRecordDecl->hasUninitializedReferenceMember();
  return val;
}

bool CXXRecordDecl::HasUserDeclaredConstructor(void) const {
  auto val = u.CXXRecordDecl->hasUserDeclaredConstructor();
  return val;
}

bool CXXRecordDecl::HasUserDeclaredCopyAssignment(void) const {
  auto val = u.CXXRecordDecl->hasUserDeclaredCopyAssignment();
  return val;
}

bool CXXRecordDecl::HasUserDeclaredCopyConstructor(void) const {
  auto val = u.CXXRecordDecl->hasUserDeclaredCopyConstructor();
  return val;
}

bool CXXRecordDecl::HasUserDeclaredDestructor(void) const {
  auto val = u.CXXRecordDecl->hasUserDeclaredDestructor();
  return val;
}

bool CXXRecordDecl::HasUserDeclaredMoveAssignment(void) const {
  auto val = u.CXXRecordDecl->hasUserDeclaredMoveAssignment();
  return val;
}

bool CXXRecordDecl::HasUserDeclaredMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->hasUserDeclaredMoveConstructor();
  return val;
}

bool CXXRecordDecl::HasUserDeclaredMoveOperation(void) const {
  auto val = u.CXXRecordDecl->hasUserDeclaredMoveOperation();
  return val;
}

bool CXXRecordDecl::HasUserProvidedDefaultConstructor(void) const {
  auto val = u.CXXRecordDecl->hasUserProvidedDefaultConstructor();
  return val;
}

bool CXXRecordDecl::HasVariantMembers(void) const {
  auto val = u.CXXRecordDecl->hasVariantMembers();
  return val;
}

bool CXXRecordDecl::ImplicitCopyAssignmentHasConstParam(void) const {
  auto val = u.CXXRecordDecl->implicitCopyAssignmentHasConstParam();
  return val;
}

bool CXXRecordDecl::ImplicitCopyConstructorHasConstParam(void) const {
  auto val = u.CXXRecordDecl->implicitCopyConstructorHasConstParam();
  return val;
}

bool CXXRecordDecl::IsAbstract(void) const {
  auto val = u.CXXRecordDecl->isAbstract();
  return val;
}

bool CXXRecordDecl::IsAggregate(void) const {
  auto val = u.CXXRecordDecl->isAggregate();
  return val;
}

bool CXXRecordDecl::IsCXX11StandardLayout(void) const {
  auto val = u.CXXRecordDecl->isCXX11StandardLayout();
  return val;
}

bool CXXRecordDecl::IsDependentLambda(void) const {
  auto val = u.CXXRecordDecl->isDependentLambda();
  return val;
}

bool CXXRecordDecl::IsDynamicClass(void) const {
  auto val = u.CXXRecordDecl->isDynamicClass();
  return val;
}

bool CXXRecordDecl::IsEmpty(void) const {
  auto val = u.CXXRecordDecl->isEmpty();
  return val;
}

bool CXXRecordDecl::IsLambda(void) const {
  auto val = u.CXXRecordDecl->isLambda();
  return val;
}

bool CXXRecordDecl::IsLiteral(void) const {
  auto val = u.CXXRecordDecl->isLiteral();
  return val;
}

  // IsLocalClass
bool CXXRecordDecl::IsPOD(void) const {
  auto val = u.CXXRecordDecl->isPOD();
  return val;
}

bool CXXRecordDecl::IsParsingBaseSpecifiers(void) const {
  auto val = u.CXXRecordDecl->isParsingBaseSpecifiers();
  return val;
}

bool CXXRecordDecl::IsPolymorphic(void) const {
  auto val = u.CXXRecordDecl->isPolymorphic();
  return val;
}

bool CXXRecordDecl::IsStandardLayout(void) const {
  auto val = u.CXXRecordDecl->isStandardLayout();
  return val;
}

bool CXXRecordDecl::IsTrivial(void) const {
  auto val = u.CXXRecordDecl->isTrivial();
  return val;
}

bool CXXRecordDecl::MayBeDynamicClass(void) const {
  auto val = u.CXXRecordDecl->mayBeDynamicClass();
  return val;
}

bool CXXRecordDecl::MayBeNonDynamicClass(void) const {
  auto val = u.CXXRecordDecl->mayBeNonDynamicClass();
  return val;
}

  // Methods
bool CXXRecordDecl::NeedsImplicitCopyAssignment(void) const {
  auto val = u.CXXRecordDecl->needsImplicitCopyAssignment();
  return val;
}

bool CXXRecordDecl::NeedsImplicitCopyConstructor(void) const {
  auto val = u.CXXRecordDecl->needsImplicitCopyConstructor();
  return val;
}

bool CXXRecordDecl::NeedsImplicitDefaultConstructor(void) const {
  auto val = u.CXXRecordDecl->needsImplicitDefaultConstructor();
  return val;
}

bool CXXRecordDecl::NeedsImplicitDestructor(void) const {
  auto val = u.CXXRecordDecl->needsImplicitDestructor();
  return val;
}

bool CXXRecordDecl::NeedsImplicitMoveAssignment(void) const {
  auto val = u.CXXRecordDecl->needsImplicitMoveAssignment();
  return val;
}

bool CXXRecordDecl::NeedsImplicitMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->needsImplicitMoveConstructor();
  return val;
}

bool CXXRecordDecl::NeedsOverloadResolutionForCopyAssignment(void) const {
  auto val = u.CXXRecordDecl->needsOverloadResolutionForCopyAssignment();
  return val;
}

bool CXXRecordDecl::NeedsOverloadResolutionForCopyConstructor(void) const {
  auto val = u.CXXRecordDecl->needsOverloadResolutionForCopyConstructor();
  return val;
}

bool CXXRecordDecl::NeedsOverloadResolutionForDestructor(void) const {
  auto val = u.CXXRecordDecl->needsOverloadResolutionForDestructor();
  return val;
}

bool CXXRecordDecl::NeedsOverloadResolutionForMoveAssignment(void) const {
  auto val = u.CXXRecordDecl->needsOverloadResolutionForMoveAssignment();
  return val;
}

bool CXXRecordDecl::NeedsOverloadResolutionForMoveConstructor(void) const {
  auto val = u.CXXRecordDecl->needsOverloadResolutionForMoveConstructor();
  return val;
}

  // VirtualBases
ClassTemplateSpecializationDecl::ClassTemplateSpecializationDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ClassTemplateSpecializationDecl *decl_)
    : CXXRecordDecl(std::move(ast_), decl_) {}

  // Profile
std::optional<::pasta::Token> ClassTemplateSpecializationDecl::ExternToken(void) const {
  auto val = u.ClassTemplateSpecializationDecl->getExternLoc();
  return ast->TokenAt(val);
}

  // InstantiatedFrom
std::optional<::pasta::Token> ClassTemplateSpecializationDecl::PointOfInstantiation(void) const {
  auto val = u.ClassTemplateSpecializationDecl->getPointOfInstantiation();
  return ast->TokenAt(val);
}

TemplateSpecializationKind ClassTemplateSpecializationDecl::SpecializationKind(void) const {
  auto val = u.ClassTemplateSpecializationDecl->getSpecializationKind();
  return static_cast<::pasta::TemplateSpecializationKind>(static_cast<unsigned int>(val));
}

  // SpecializedTemplateOrPartial
  // TemplateArgs
  // TemplateInstantiationArgs
std::optional<::pasta::Token> ClassTemplateSpecializationDecl::TemplateKeywordToken(void) const {
  auto val = u.ClassTemplateSpecializationDecl->getTemplateKeywordLoc();
  return ast->TokenAt(val);
}

  // TypeAsWritten
bool ClassTemplateSpecializationDecl::IsClassScopeExplicitSpecialization(void) const {
  auto val = u.ClassTemplateSpecializationDecl->isClassScopeExplicitSpecialization();
  return val;
}

bool ClassTemplateSpecializationDecl::IsExplicitInstantiationOrSpecialization(void) const {
  auto val = u.ClassTemplateSpecializationDecl->isExplicitInstantiationOrSpecialization();
  return val;
}

bool ClassTemplateSpecializationDecl::IsExplicitSpecialization(void) const {
  auto val = u.ClassTemplateSpecializationDecl->isExplicitSpecialization();
  return val;
}

ClassTemplatePartialSpecializationDecl::ClassTemplatePartialSpecializationDecl(
    std::shared_ptr<ASTImpl> ast_,
    const ::clang::ClassTemplatePartialSpecializationDecl *decl_)
    : ClassTemplateSpecializationDecl(std::move(ast_), decl_) {}

  // Profile
  // AssociatedConstraints
  // InjectedSpecializationType
  // InstantiatedFromMember
  // InstantiatedFromMemberTemplate
  // TemplateArgsAsWritten
  // TemplateParameters
bool ClassTemplatePartialSpecializationDecl::HasAssociatedConstraints(void) const {
  auto val = u.ClassTemplatePartialSpecializationDecl->hasAssociatedConstraints();
  return val;
}

}  // namespace pasta
