/*
 * Copyright (c) 2021 Trail of Bits, Inc.
 */

// This file is auto-generated.

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <string_view>

#include "Token.h"

namespace clang {
class AccessSpecDecl;
class BindingDecl;
class BlockDecl;
class BuiltinTemplateDecl;
class CXXConstructorDecl;
class CXXConversionDecl;
class CXXDeductionGuideDecl;
class CXXDestructorDecl;
class CXXMethodDecl;
class CXXRecordDecl;
class CapturedDecl;
class ClassScopeFunctionSpecializationDecl;
class ClassTemplateDecl;
class ClassTemplatePartialSpecializationDecl;
class ClassTemplateSpecializationDecl;
class ConceptDecl;
class ConstructorUsingShadowDecl;
class Decl;
class DeclContext;
class DeclaratorDecl;
class DecompositionDecl;
class EmptyDecl;
class EnumConstantDecl;
class EnumDecl;
class ExportDecl;
class ExternCContextDecl;
class FieldDecl;
class FileScopeAsmDecl;
class FriendDecl;
class FriendTemplateDecl;
class FunctionDecl;
class FunctionTemplateDecl;
class ImplicitParamDecl;
class ImportDecl;
class IndirectFieldDecl;
class LabelDecl;
class LifetimeExtendedTemporaryDecl;
class LinkageSpecDecl;
class MSGuidDecl;
class MSPropertyDecl;
class NamedDecl;
class NamespaceAliasDecl;
class NamespaceDecl;
class NonTypeTemplateParmDecl;
class OMPAllocateDecl;
class OMPCapturedExprDecl;
class OMPDeclareMapperDecl;
class OMPDeclareReductionDecl;
class OMPRequiresDecl;
class OMPThreadPrivateDecl;
class ObjCAtDefsFieldDecl;
class ObjCCategoryDecl;
class ObjCCategoryImplDecl;
class ObjCCompatibleAliasDecl;
class ObjCContainerDecl;
class ObjCImplDecl;
class ObjCImplementationDecl;
class ObjCInterfaceDecl;
class ObjCIvarDecl;
class ObjCMethodDecl;
class ObjCPropertyDecl;
class ObjCPropertyImplDecl;
class ObjCProtocolDecl;
class ObjCTypeParamDecl;
class ParmVarDecl;
class PragmaCommentDecl;
class PragmaDetectMismatchDecl;
class RecordDecl;
class RedeclarableTemplateDecl;
class RequiresExprBodyDecl;
class StaticAssertDecl;
class TagDecl;
class TemplateDecl;
class TemplateTemplateParmDecl;
class TemplateTypeParmDecl;
class TranslationUnitDecl;
class TypeAliasDecl;
class TypeAliasTemplateDecl;
class TypeDecl;
class TypedefDecl;
class TypedefNameDecl;
class UnresolvedUsingTypenameDecl;
class UnresolvedUsingValueDecl;
class UsingDecl;
class UsingDirectiveDecl;
class UsingPackDecl;
class UsingShadowDecl;
class ValueDecl;
class VarDecl;
class VarTemplateDecl;
class VarTemplatePartialSpecializationDecl;
class VarTemplateSpecializationDecl;
}  // namespace clang
namespace pasta {
class AST;
class ASTImpl;

enum class DeclKind : unsigned {
  kAccessSpecDecl,
  kBindingDecl,
  kBlockDecl,
  kBuiltinTemplateDecl,
  kCXXConstructorDecl,
  kCXXConversionDecl,
  kCXXDeductionGuideDecl,
  kCXXDestructorDecl,
  kCXXMethodDecl,
  kCXXRecordDecl,
  kCapturedDecl,
  kClassScopeFunctionSpecializationDecl,
  kClassTemplateDecl,
  kClassTemplatePartialSpecializationDecl,
  kClassTemplateSpecializationDecl,
  kConceptDecl,
  kConstructorUsingShadowDecl,
  kDeclaratorDecl,
  kDecompositionDecl,
  kEmptyDecl,
  kEnumConstantDecl,
  kEnumDecl,
  kExportDecl,
  kExternCContextDecl,
  kFieldDecl,
  kFileScopeAsmDecl,
  kFriendDecl,
  kFriendTemplateDecl,
  kFunctionDecl,
  kFunctionTemplateDecl,
  kImplicitParamDecl,
  kImportDecl,
  kIndirectFieldDecl,
  kLabelDecl,
  kLifetimeExtendedTemporaryDecl,
  kLinkageSpecDecl,
  kMSGuidDecl,
  kMSPropertyDecl,
  kNamedDecl,
  kNamespaceAliasDecl,
  kNamespaceDecl,
  kNonTypeTemplateParmDecl,
  kOMPAllocateDecl,
  kOMPCapturedExprDecl,
  kOMPDeclareMapperDecl,
  kOMPDeclareReductionDecl,
  kOMPRequiresDecl,
  kOMPThreadPrivateDecl,
  kObjCAtDefsFieldDecl,
  kObjCCategoryDecl,
  kObjCCategoryImplDecl,
  kObjCCompatibleAliasDecl,
  kObjCContainerDecl,
  kObjCImplDecl,
  kObjCImplementationDecl,
  kObjCInterfaceDecl,
  kObjCIvarDecl,
  kObjCMethodDecl,
  kObjCPropertyDecl,
  kObjCPropertyImplDecl,
  kObjCProtocolDecl,
  kObjCTypeParamDecl,
  kParmVarDecl,
  kPragmaCommentDecl,
  kPragmaDetectMismatchDecl,
  kRecordDecl,
  kRedeclarableTemplateDecl,
  kRequiresExprBodyDecl,
  kStaticAssertDecl,
  kTagDecl,
  kTemplateDecl,
  kTemplateTemplateParmDecl,
  kTemplateTypeParmDecl,
  kTranslationUnitDecl,
  kTypeAliasDecl,
  kTypeAliasTemplateDecl,
  kTypeDecl,
  kTypedefDecl,
  kTypedefNameDecl,
  kUnresolvedUsingTypenameDecl,
  kUnresolvedUsingValueDecl,
  kUsingDecl,
  kUsingDirectiveDecl,
  kUsingPackDecl,
  kUsingShadowDecl,
  kValueDecl,
  kVarDecl,
  kVarTemplateDecl,
  kVarTemplatePartialSpecializationDecl,
  kVarTemplateSpecializationDecl,
};

class AccessSpecDecl;
class BindingDecl;
class BlockDecl;
class BuiltinTemplateDecl;
class CXXConstructorDecl;
class CXXConversionDecl;
class CXXDeductionGuideDecl;
class CXXDestructorDecl;
class CXXMethodDecl;
class CXXRecordDecl;
class CapturedDecl;
class ClassScopeFunctionSpecializationDecl;
class ClassTemplateDecl;
class ClassTemplatePartialSpecializationDecl;
class ClassTemplateSpecializationDecl;
class ConceptDecl;
class ConstructorUsingShadowDecl;
class Decl;
class DeclContext;
class DeclaratorDecl;
class DecompositionDecl;
class EmptyDecl;
class EnumConstantDecl;
class EnumDecl;
class ExportDecl;
class ExternCContextDecl;
class FieldDecl;
class FileScopeAsmDecl;
class FriendDecl;
class FriendTemplateDecl;
class FunctionDecl;
class FunctionTemplateDecl;
class ImplicitParamDecl;
class ImportDecl;
class IndirectFieldDecl;
class LabelDecl;
class LifetimeExtendedTemporaryDecl;
class LinkageSpecDecl;
class MSGuidDecl;
class MSPropertyDecl;
class NamedDecl;
class NamespaceAliasDecl;
class NamespaceDecl;
class NonTypeTemplateParmDecl;
class OMPAllocateDecl;
class OMPCapturedExprDecl;
class OMPDeclareMapperDecl;
class OMPDeclareReductionDecl;
class OMPRequiresDecl;
class OMPThreadPrivateDecl;
class ObjCAtDefsFieldDecl;
class ObjCCategoryDecl;
class ObjCCategoryImplDecl;
class ObjCCompatibleAliasDecl;
class ObjCContainerDecl;
class ObjCImplDecl;
class ObjCImplementationDecl;
class ObjCInterfaceDecl;
class ObjCIvarDecl;
class ObjCMethodDecl;
class ObjCPropertyDecl;
class ObjCPropertyImplDecl;
class ObjCProtocolDecl;
class ObjCTypeParamDecl;
class ParmVarDecl;
class PragmaCommentDecl;
class PragmaDetectMismatchDecl;
class RecordDecl;
class RedeclarableTemplateDecl;
class RequiresExprBodyDecl;
class StaticAssertDecl;
class TagDecl;
class TemplateDecl;
class TemplateTemplateParmDecl;
class TemplateTypeParmDecl;
class TranslationUnitDecl;
class TypeAliasDecl;
class TypeAliasTemplateDecl;
class TypeDecl;
class TypedefDecl;
class TypedefNameDecl;
class UnresolvedUsingTypenameDecl;
class UnresolvedUsingValueDecl;
class UsingDecl;
class UsingDirectiveDecl;
class UsingPackDecl;
class UsingShadowDecl;
class ValueDecl;
class VarDecl;
class VarTemplateDecl;
class VarTemplatePartialSpecializationDecl;
class VarTemplateSpecializationDecl;
class Decl {
 public:
  ~Decl(void) = default;
  Decl(const Decl &) = default;
  Decl(Decl &&) noexcept = default;
  Decl &operator=(const Decl &) = default;
  Decl &operator=(Decl &&) noexcept = default;

  // Attrs
  // Access
  // AccessUnsafe
  // AsFunction
  std::optional<::pasta::Token> BeginToken(void) const;
  // Body
  // CanonicalDecl
  // DeclContext
  std::optional<::pasta::Token> EndToken(void) const;
  // FriendObjectKind
  uint32_t GlobalID(void) const;
  uint32_t IdentifierNamespace(void) const;
  // ImportedOwningModule
  // LexicalDeclContext
  // LocalOwningModule
  std::optional<::pasta::Token> Token(void) const;
  // ModuleOwnershipKind
  // MostRecentDecl
  // NextDeclInContext
  // NonClosureContext
  // OwningModule
  uint32_t OwningModuleID(void) const;
  // PreviousDecl
  // TokenRange
  // TranslationUnitDecl
  bool HasAttrs(void) const;
  bool HasBody(void) const;
  bool HasOwningModule(void) const;
  bool HasTagIdentifierNamespace(void) const;
  bool IsCanonicalDecl(void) const;
  bool IsDefinedOutsideFunctionOrMethod(void) const;
  bool IsDeprecated(void) const;
  bool IsFirstDecl(void) const;
  bool IsFromASTFile(void) const;
  bool IsFunctionOrFunctionTemplate(void) const;
  bool IsImplicit(void) const;
  // IsInIdentifierNamespace
  bool IsInvalidDecl(void) const;
  bool IsModulePrivate(void) const;
  bool IsTemplateParameter(void) const;
  bool IsThisDeclarationReferenced(void) const;
  bool IsTopLevelDeclInObjCContainer(void) const;
  bool IsUnavailable(void) const;
  bool IsUnconditionallyVisible(void) const;
  // Redecls
  inline DeclKind Kind(void) const {
    return kind;
  }

  std::string_view KindName(void) const;

 protected:
  std::shared_ptr<ASTImpl> ast;
  union {
    const ::clang::AccessSpecDecl *AccessSpecDecl;
    const ::clang::BindingDecl *BindingDecl;
    const ::clang::BlockDecl *BlockDecl;
    const ::clang::BuiltinTemplateDecl *BuiltinTemplateDecl;
    const ::clang::CXXConstructorDecl *CXXConstructorDecl;
    const ::clang::CXXConversionDecl *CXXConversionDecl;
    const ::clang::CXXDeductionGuideDecl *CXXDeductionGuideDecl;
    const ::clang::CXXDestructorDecl *CXXDestructorDecl;
    const ::clang::CXXMethodDecl *CXXMethodDecl;
    const ::clang::CXXRecordDecl *CXXRecordDecl;
    const ::clang::CapturedDecl *CapturedDecl;
    const ::clang::ClassScopeFunctionSpecializationDecl *ClassScopeFunctionSpecializationDecl;
    const ::clang::ClassTemplateDecl *ClassTemplateDecl;
    const ::clang::ClassTemplatePartialSpecializationDecl *ClassTemplatePartialSpecializationDecl;
    const ::clang::ClassTemplateSpecializationDecl *ClassTemplateSpecializationDecl;
    const ::clang::ConceptDecl *ConceptDecl;
    const ::clang::ConstructorUsingShadowDecl *ConstructorUsingShadowDecl;
    const ::clang::Decl *Decl;
    const ::clang::DeclaratorDecl *DeclaratorDecl;
    const ::clang::DecompositionDecl *DecompositionDecl;
    const ::clang::EmptyDecl *EmptyDecl;
    const ::clang::EnumConstantDecl *EnumConstantDecl;
    const ::clang::EnumDecl *EnumDecl;
    const ::clang::ExportDecl *ExportDecl;
    const ::clang::ExternCContextDecl *ExternCContextDecl;
    const ::clang::FieldDecl *FieldDecl;
    const ::clang::FileScopeAsmDecl *FileScopeAsmDecl;
    const ::clang::FriendDecl *FriendDecl;
    const ::clang::FriendTemplateDecl *FriendTemplateDecl;
    const ::clang::FunctionDecl *FunctionDecl;
    const ::clang::FunctionTemplateDecl *FunctionTemplateDecl;
    const ::clang::ImplicitParamDecl *ImplicitParamDecl;
    const ::clang::ImportDecl *ImportDecl;
    const ::clang::IndirectFieldDecl *IndirectFieldDecl;
    const ::clang::LabelDecl *LabelDecl;
    const ::clang::LifetimeExtendedTemporaryDecl *LifetimeExtendedTemporaryDecl;
    const ::clang::LinkageSpecDecl *LinkageSpecDecl;
    const ::clang::MSGuidDecl *MSGuidDecl;
    const ::clang::MSPropertyDecl *MSPropertyDecl;
    const ::clang::NamedDecl *NamedDecl;
    const ::clang::NamespaceAliasDecl *NamespaceAliasDecl;
    const ::clang::NamespaceDecl *NamespaceDecl;
    const ::clang::NonTypeTemplateParmDecl *NonTypeTemplateParmDecl;
    const ::clang::OMPAllocateDecl *OMPAllocateDecl;
    const ::clang::OMPCapturedExprDecl *OMPCapturedExprDecl;
    const ::clang::OMPDeclareMapperDecl *OMPDeclareMapperDecl;
    const ::clang::OMPDeclareReductionDecl *OMPDeclareReductionDecl;
    const ::clang::OMPRequiresDecl *OMPRequiresDecl;
    const ::clang::OMPThreadPrivateDecl *OMPThreadPrivateDecl;
    const ::clang::ObjCAtDefsFieldDecl *ObjCAtDefsFieldDecl;
    const ::clang::ObjCCategoryDecl *ObjCCategoryDecl;
    const ::clang::ObjCCategoryImplDecl *ObjCCategoryImplDecl;
    const ::clang::ObjCCompatibleAliasDecl *ObjCCompatibleAliasDecl;
    const ::clang::ObjCContainerDecl *ObjCContainerDecl;
    const ::clang::ObjCImplDecl *ObjCImplDecl;
    const ::clang::ObjCImplementationDecl *ObjCImplementationDecl;
    const ::clang::ObjCInterfaceDecl *ObjCInterfaceDecl;
    const ::clang::ObjCIvarDecl *ObjCIvarDecl;
    const ::clang::ObjCMethodDecl *ObjCMethodDecl;
    const ::clang::ObjCPropertyDecl *ObjCPropertyDecl;
    const ::clang::ObjCPropertyImplDecl *ObjCPropertyImplDecl;
    const ::clang::ObjCProtocolDecl *ObjCProtocolDecl;
    const ::clang::ObjCTypeParamDecl *ObjCTypeParamDecl;
    const ::clang::ParmVarDecl *ParmVarDecl;
    const ::clang::PragmaCommentDecl *PragmaCommentDecl;
    const ::clang::PragmaDetectMismatchDecl *PragmaDetectMismatchDecl;
    const ::clang::RecordDecl *RecordDecl;
    const ::clang::RedeclarableTemplateDecl *RedeclarableTemplateDecl;
    const ::clang::RequiresExprBodyDecl *RequiresExprBodyDecl;
    const ::clang::StaticAssertDecl *StaticAssertDecl;
    const ::clang::TagDecl *TagDecl;
    const ::clang::TemplateDecl *TemplateDecl;
    const ::clang::TemplateTemplateParmDecl *TemplateTemplateParmDecl;
    const ::clang::TemplateTypeParmDecl *TemplateTypeParmDecl;
    const ::clang::TranslationUnitDecl *TranslationUnitDecl;
    const ::clang::TypeAliasDecl *TypeAliasDecl;
    const ::clang::TypeAliasTemplateDecl *TypeAliasTemplateDecl;
    const ::clang::TypeDecl *TypeDecl;
    const ::clang::TypedefDecl *TypedefDecl;
    const ::clang::TypedefNameDecl *TypedefNameDecl;
    const ::clang::UnresolvedUsingTypenameDecl *UnresolvedUsingTypenameDecl;
    const ::clang::UnresolvedUsingValueDecl *UnresolvedUsingValueDecl;
    const ::clang::UsingDecl *UsingDecl;
    const ::clang::UsingDirectiveDecl *UsingDirectiveDecl;
    const ::clang::UsingPackDecl *UsingPackDecl;
    const ::clang::UsingShadowDecl *UsingShadowDecl;
    const ::clang::ValueDecl *ValueDecl;
    const ::clang::VarDecl *VarDecl;
    const ::clang::VarTemplateDecl *VarTemplateDecl;
    const ::clang::VarTemplatePartialSpecializationDecl *VarTemplatePartialSpecializationDecl;
    const ::clang::VarTemplateSpecializationDecl *VarTemplateSpecializationDecl;
  } u;
  DeclKind kind;

  inline explicit Decl(std::shared_ptr<ASTImpl> ast_,
                       const ::clang::Decl *decl_,
                       DeclKind kind_)
      : ast(std::move(ast_)),
        kind(kind_) {
    u.Decl = decl_;
  }

 private:
  Decl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit Decl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::Decl *decl_);
};

class EmptyDecl : public Decl {
 public:
  ~EmptyDecl(void) = default;
  EmptyDecl(const EmptyDecl &) = default;
  EmptyDecl(EmptyDecl &&) noexcept = default;
  EmptyDecl &operator=(const EmptyDecl &) = default;
  EmptyDecl &operator=(EmptyDecl &&) noexcept = default;

 private:
  EmptyDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit EmptyDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::EmptyDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(EmptyDecl));

class ExportDecl : public Decl {
 public:
  ~ExportDecl(void) = default;
  ExportDecl(const ExportDecl &) = default;
  ExportDecl(ExportDecl &&) noexcept = default;
  ExportDecl &operator=(const ExportDecl &) = default;
  ExportDecl &operator=(ExportDecl &&) noexcept = default;

  std::optional<::pasta::Token> EndToken(void) const;
  std::optional<::pasta::Token> ExportToken(void) const;
  std::optional<::pasta::Token> RBraceToken(void) const;
  // TokenRange
  bool HasBraces(void) const;
 private:
  ExportDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ExportDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ExportDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ExportDecl));

class ExternCContextDecl : public Decl {
 public:
  ~ExternCContextDecl(void) = default;
  ExternCContextDecl(const ExternCContextDecl &) = default;
  ExternCContextDecl(ExternCContextDecl &&) noexcept = default;
  ExternCContextDecl &operator=(const ExternCContextDecl &) = default;
  ExternCContextDecl &operator=(ExternCContextDecl &&) noexcept = default;

 private:
  ExternCContextDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ExternCContextDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ExternCContextDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ExternCContextDecl));

class FileScopeAsmDecl : public Decl {
 public:
  ~FileScopeAsmDecl(void) = default;
  FileScopeAsmDecl(const FileScopeAsmDecl &) = default;
  FileScopeAsmDecl(FileScopeAsmDecl &&) noexcept = default;
  FileScopeAsmDecl &operator=(const FileScopeAsmDecl &) = default;
  FileScopeAsmDecl &operator=(FileScopeAsmDecl &&) noexcept = default;

  std::optional<::pasta::Token> AsmToken(void) const;
  // AsmString
  std::optional<::pasta::Token> RParenToken(void) const;
  // TokenRange
 private:
  FileScopeAsmDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit FileScopeAsmDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::FileScopeAsmDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(FileScopeAsmDecl));

class FriendDecl : public Decl {
 public:
  ~FriendDecl(void) = default;
  FriendDecl(const FriendDecl &) = default;
  FriendDecl(FriendDecl &&) noexcept = default;
  FriendDecl &operator=(const FriendDecl &) = default;
  FriendDecl &operator=(FriendDecl &&) noexcept = default;

  // FriendDecl
  std::optional<::pasta::Token> FriendToken(void) const;
  // FriendType
  uint32_t FriendTypeNumTemplateParameterLists(void) const;
  // FriendTypeTemplateParameterList
  // TokenRange
  bool IsUnsupportedFriend(void) const;
 private:
  FriendDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit FriendDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::FriendDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(FriendDecl));

class FriendTemplateDecl : public Decl {
 public:
  ~FriendTemplateDecl(void) = default;
  FriendTemplateDecl(const FriendTemplateDecl &) = default;
  FriendTemplateDecl(FriendTemplateDecl &&) noexcept = default;
  FriendTemplateDecl &operator=(const FriendTemplateDecl &) = default;
  FriendTemplateDecl &operator=(FriendTemplateDecl &&) noexcept = default;

  // FriendDecl
  std::optional<::pasta::Token> FriendToken(void) const;
  // FriendType
  uint32_t NumTemplateParameters(void) const;
  // TemplateParameterList
 private:
  FriendTemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit FriendTemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::FriendTemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(FriendTemplateDecl));

class ImportDecl : public Decl {
 public:
  ~ImportDecl(void) = default;
  ImportDecl(const ImportDecl &) = default;
  ImportDecl(ImportDecl &&) noexcept = default;
  ImportDecl &operator=(const ImportDecl &) = default;
  ImportDecl &operator=(ImportDecl &&) noexcept = default;

  // ImportedModule
 private:
  ImportDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ImportDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ImportDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ImportDecl));

class LifetimeExtendedTemporaryDecl : public Decl {
 public:
  ~LifetimeExtendedTemporaryDecl(void) = default;
  LifetimeExtendedTemporaryDecl(const LifetimeExtendedTemporaryDecl &) = default;
  LifetimeExtendedTemporaryDecl(LifetimeExtendedTemporaryDecl &&) noexcept = default;
  LifetimeExtendedTemporaryDecl &operator=(const LifetimeExtendedTemporaryDecl &) = default;
  LifetimeExtendedTemporaryDecl &operator=(LifetimeExtendedTemporaryDecl &&) noexcept = default;

  // ChildrenExpr
  // ExtendingDecl
  uint32_t ManglingNumber(void) const;
  // TemporaryExpr
  // Value
 private:
  LifetimeExtendedTemporaryDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit LifetimeExtendedTemporaryDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::LifetimeExtendedTemporaryDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(LifetimeExtendedTemporaryDecl));

class LinkageSpecDecl : public Decl {
 public:
  ~LinkageSpecDecl(void) = default;
  LinkageSpecDecl(const LinkageSpecDecl &) = default;
  LinkageSpecDecl(LinkageSpecDecl &&) noexcept = default;
  LinkageSpecDecl &operator=(const LinkageSpecDecl &) = default;
  LinkageSpecDecl &operator=(LinkageSpecDecl &&) noexcept = default;

  std::optional<::pasta::Token> EndToken(void) const;
  std::optional<::pasta::Token> ExternToken(void) const;
  // Language
  std::optional<::pasta::Token> RBraceToken(void) const;
  // TokenRange
  bool HasBraces(void) const;
 private:
  LinkageSpecDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit LinkageSpecDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::LinkageSpecDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(LinkageSpecDecl));

class NamedDecl : public Decl {
 public:
  ~NamedDecl(void) = default;
  NamedDecl(const NamedDecl &) = default;
  NamedDecl(NamedDecl &&) noexcept = default;
  NamedDecl &operator=(const NamedDecl &) = default;
  NamedDecl &operator=(NamedDecl &&) noexcept = default;

  // DeclName
  // FormalLinkage
  // Identifier
  // MostRecentDecl
  std::string_view Name(void) const;
  std::string NameAsString(void) const;
  // UnderlyingDecl
  // Visibility
  bool HasExternalFormalLinkage(void) const;
  bool HasLinkageBeenComputed(void) const;
  bool IsCXXClassMember(void) const;
  bool IsExternallyDeclarable(void) const;
  bool IsExternallyVisible(void) const;
 private:
  NamedDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit NamedDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::NamedDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(NamedDecl));

class NamespaceAliasDecl : public NamedDecl {
 public:
  ~NamespaceAliasDecl(void) = default;
  NamespaceAliasDecl(const NamespaceAliasDecl &) = default;
  NamespaceAliasDecl(NamespaceAliasDecl &&) noexcept = default;
  NamespaceAliasDecl &operator=(const NamespaceAliasDecl &) = default;
  NamespaceAliasDecl &operator=(NamespaceAliasDecl &&) noexcept = default;

  std::optional<::pasta::Token> AliasToken(void) const;
  // AliasedNamespace
  // CanonicalDecl
  // Namespace
  std::optional<::pasta::Token> NamespaceToken(void) const;
  // Qualifier
  // QualifierToken
  // TokenRange
  std::optional<::pasta::Token> TargetNameToken(void) const;
 private:
  NamespaceAliasDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit NamespaceAliasDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::NamespaceAliasDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(NamespaceAliasDecl));

class NamespaceDecl : public NamedDecl {
 public:
  ~NamespaceDecl(void) = default;
  NamespaceDecl(const NamespaceDecl &) = default;
  NamespaceDecl(NamespaceDecl &&) noexcept = default;
  NamespaceDecl &operator=(const NamespaceDecl &) = default;
  NamespaceDecl &operator=(NamespaceDecl &&) noexcept = default;

  // AnonymousNamespace
  std::optional<::pasta::Token> BeginToken(void) const;
  // CanonicalDecl
  std::optional<::pasta::Token> RBraceToken(void) const;
  // TokenRange
  bool IsAnonymousNamespace(void) const;
  bool IsInline(void) const;
 private:
  NamespaceDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit NamespaceDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::NamespaceDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(NamespaceDecl));

class OMPAllocateDecl : public Decl {
 public:
  ~OMPAllocateDecl(void) = default;
  OMPAllocateDecl(const OMPAllocateDecl &) = default;
  OMPAllocateDecl(OMPAllocateDecl &&) noexcept = default;
  OMPAllocateDecl &operator=(const OMPAllocateDecl &) = default;
  OMPAllocateDecl &operator=(OMPAllocateDecl &&) noexcept = default;

  // Clauses
  // Varlists
 private:
  OMPAllocateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit OMPAllocateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::OMPAllocateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(OMPAllocateDecl));

class OMPRequiresDecl : public Decl {
 public:
  ~OMPRequiresDecl(void) = default;
  OMPRequiresDecl(const OMPRequiresDecl &) = default;
  OMPRequiresDecl(OMPRequiresDecl &&) noexcept = default;
  OMPRequiresDecl &operator=(const OMPRequiresDecl &) = default;
  OMPRequiresDecl &operator=(OMPRequiresDecl &&) noexcept = default;

  // Clauses
 private:
  OMPRequiresDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit OMPRequiresDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::OMPRequiresDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(OMPRequiresDecl));

class OMPThreadPrivateDecl : public Decl {
 public:
  ~OMPThreadPrivateDecl(void) = default;
  OMPThreadPrivateDecl(const OMPThreadPrivateDecl &) = default;
  OMPThreadPrivateDecl(OMPThreadPrivateDecl &&) noexcept = default;
  OMPThreadPrivateDecl &operator=(const OMPThreadPrivateDecl &) = default;
  OMPThreadPrivateDecl &operator=(OMPThreadPrivateDecl &&) noexcept = default;

  // Varlists
 private:
  OMPThreadPrivateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit OMPThreadPrivateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::OMPThreadPrivateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(OMPThreadPrivateDecl));

class ObjCCompatibleAliasDecl : public NamedDecl {
 public:
  ~ObjCCompatibleAliasDecl(void) = default;
  ObjCCompatibleAliasDecl(const ObjCCompatibleAliasDecl &) = default;
  ObjCCompatibleAliasDecl(ObjCCompatibleAliasDecl &&) noexcept = default;
  ObjCCompatibleAliasDecl &operator=(const ObjCCompatibleAliasDecl &) = default;
  ObjCCompatibleAliasDecl &operator=(ObjCCompatibleAliasDecl &&) noexcept = default;

  // ClassInterface
 private:
  ObjCCompatibleAliasDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCCompatibleAliasDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCCompatibleAliasDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCCompatibleAliasDecl));

class ObjCContainerDecl : public NamedDecl {
 public:
  ~ObjCContainerDecl(void) = default;
  ObjCContainerDecl(const ObjCContainerDecl &) = default;
  ObjCContainerDecl(ObjCContainerDecl &&) noexcept = default;
  ObjCContainerDecl &operator=(const ObjCContainerDecl &) = default;
  ObjCContainerDecl &operator=(ObjCContainerDecl &&) noexcept = default;

  // Class_methods
  // Class_properties
  // CollectPropertiesToImplement
  // AtEndRange
  std::optional<::pasta::Token> AtStartToken(void) const;
  // ClassMethod
  // InstanceMethod
  // TokenRange
  // Instance_methods
  // Instance_properties
  // Methods
  // Properties
 private:
  ObjCContainerDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCContainerDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCContainerDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCContainerDecl));

class ObjCImplDecl : public ObjCContainerDecl {
 public:
  ~ObjCImplDecl(void) = default;
  ObjCImplDecl(const ObjCImplDecl &) = default;
  ObjCImplDecl(ObjCImplDecl &&) noexcept = default;
  ObjCImplDecl &operator=(const ObjCImplDecl &) = default;
  ObjCImplDecl &operator=(ObjCImplDecl &&) noexcept = default;

  // ClassInterface
  // Property_impls
 private:
  ObjCImplDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCImplDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCImplDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCImplDecl));

class ObjCImplementationDecl : public ObjCImplDecl {
 public:
  ~ObjCImplementationDecl(void) = default;
  ObjCImplementationDecl(const ObjCImplementationDecl &) = default;
  ObjCImplementationDecl(ObjCImplementationDecl &&) noexcept = default;
  ObjCImplementationDecl &operator=(const ObjCImplementationDecl &) = default;
  ObjCImplementationDecl &operator=(ObjCImplementationDecl &&) noexcept = default;

  // Identifier
  std::optional<::pasta::Token> IvarLBraceToken(void) const;
  std::optional<::pasta::Token> IvarRBraceToken(void) const;
  std::string_view Name(void) const;
  std::string NameAsString(void) const;
  uint32_t NumIvarInitializers(void) const;
  // SuperClass
  std::optional<::pasta::Token> SuperClassToken(void) const;
  bool HasDestructors(void) const;
  bool HasNonZeroConstructors(void) const;
  // Inits
  // Ivars
 private:
  ObjCImplementationDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCImplementationDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCImplementationDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCImplementationDecl));

class ObjCInterfaceDecl : public ObjCContainerDecl {
 public:
  ~ObjCInterfaceDecl(void) = default;
  ObjCInterfaceDecl(const ObjCInterfaceDecl &) = default;
  ObjCInterfaceDecl(ObjCInterfaceDecl &&) noexcept = default;
  ObjCInterfaceDecl &operator=(const ObjCInterfaceDecl &) = default;
  ObjCInterfaceDecl &operator=(ObjCInterfaceDecl &&) noexcept = default;

  // All_referenced_protocols
  bool DeclaresOrInheritsDesignatedInitializers(void) const;
  // CanonicalDecl
  // CategoryListRaw
  // CategoryMethod
  // Definition
  std::optional<::pasta::Token> EndOfDefinitionToken(void) const;
  // ReferencedProtocols
  // TokenRange
  // SuperClassTInfo
  // SuperClassType
  // TypeForDecl
  // TypeParamListAsWritten
  bool HasDefinition(void) const;
  bool IsImplicitInterfaceDecl(void) const;
  // IsSuperClassOf
  bool IsThisDeclarationADefinition(void) const;
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
 private:
  ObjCInterfaceDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCInterfaceDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCInterfaceDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCInterfaceDecl));

class ObjCMethodDecl : public NamedDecl {
 public:
  ~ObjCMethodDecl(void) = default;
  ObjCMethodDecl(const ObjCMethodDecl &) = default;
  ObjCMethodDecl(ObjCMethodDecl &&) noexcept = default;
  ObjCMethodDecl &operator=(const ObjCMethodDecl &) = default;
  ObjCMethodDecl &operator=(ObjCMethodDecl &&) noexcept = default;

  std::optional<::pasta::Token> BeginToken(void) const;
  // CanonicalDecl
  // ClassInterface
  // CmdDecl
  std::optional<::pasta::Token> DeclaratorEndToken(void) const;
  // ImplementationControl
  uint32_t NumSelectorLocs(void) const;
  // ObjCDeclQualifier
  // ParamDecl
  // ReturnType
  // ReturnTypeSourceInfo
  // Selector
  // SelectorToken
  std::optional<::pasta::Token> SelectorStartToken(void) const;
  // SelfDecl
  // TokenRange
  bool HasBody(void) const;
  bool HasRedeclaration(void) const;
  bool HasRelatedResultType(void) const;
  bool HasSkippedBody(void) const;
  bool IsClassMethod(void) const;
  bool IsDefined(void) const;
  bool IsInstanceMethod(void) const;
  bool IsOptional(void) const;
  bool IsOverriding(void) const;
  bool IsPropertyAccessor(void) const;
  bool IsRedeclaration(void) const;
  bool IsSynthesizedAccessorStub(void) const;
  bool IsThisDeclarationADefinition(void) const;
  bool IsVariadic(void) const;
  // Parameters
 private:
  ObjCMethodDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCMethodDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCMethodDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCMethodDecl));

class ObjCPropertyDecl : public NamedDecl {
 public:
  ~ObjCPropertyDecl(void) = default;
  ObjCPropertyDecl(const ObjCPropertyDecl &) = default;
  ObjCPropertyDecl(ObjCPropertyDecl &&) noexcept = default;
  ObjCPropertyDecl &operator=(const ObjCPropertyDecl &) = default;
  ObjCPropertyDecl &operator=(ObjCPropertyDecl &&) noexcept = default;

  std::optional<::pasta::Token> AtToken(void) const;
  // GetterMethodDecl
  // GetterName
  std::optional<::pasta::Token> GetterNameToken(void) const;
  std::optional<::pasta::Token> LParenToken(void) const;
  // PropertyAttributes
  // PropertyAttributesAsWritten
  // PropertyImplementation
  // PropertyIvarDecl
  // QueryKind
  // SetterKind
  // SetterMethodDecl
  // SetterName
  std::optional<::pasta::Token> SetterNameToken(void) const;
  // TokenRange
  // Type
  // TypeSourceInfo
  bool IsAtomic(void) const;
  bool IsClassProperty(void) const;
  bool IsDirectProperty(void) const;
  bool IsInstanceProperty(void) const;
  bool IsOptional(void) const;
  bool IsReadOnly(void) const;
  bool IsRetaining(void) const;
 private:
  ObjCPropertyDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCPropertyDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCPropertyDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCPropertyDecl));

class ObjCPropertyImplDecl : public Decl {
 public:
  ~ObjCPropertyImplDecl(void) = default;
  ObjCPropertyImplDecl(const ObjCPropertyImplDecl &) = default;
  ObjCPropertyImplDecl(ObjCPropertyImplDecl &&) noexcept = default;
  ObjCPropertyImplDecl &operator=(const ObjCPropertyImplDecl &) = default;
  ObjCPropertyImplDecl &operator=(ObjCPropertyImplDecl &&) noexcept = default;

  std::optional<::pasta::Token> BeginToken(void) const;
  // GetterCXXConstructor
  // GetterMethodDecl
  // PropertyDecl
  // PropertyImplementation
  // PropertyIvarDecl
  std::optional<::pasta::Token> PropertyIvarDeclToken(void) const;
  // SetterCXXAssignment
  // SetterMethodDecl
  bool IsIvarNameSpecified(void) const;
 private:
  ObjCPropertyImplDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCPropertyImplDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCPropertyImplDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCPropertyImplDecl));

class ObjCProtocolDecl : public ObjCContainerDecl {
 public:
  ~ObjCProtocolDecl(void) = default;
  ObjCProtocolDecl(const ObjCProtocolDecl &) = default;
  ObjCProtocolDecl(ObjCProtocolDecl &&) noexcept = default;
  ObjCProtocolDecl &operator=(const ObjCProtocolDecl &) = default;
  ObjCProtocolDecl &operator=(ObjCProtocolDecl &&) noexcept = default;

  // CanonicalDecl
  // Definition
  // ReferencedProtocols
  // TokenRange
  bool HasDefinition(void) const;
  bool IsThisDeclarationADefinition(void) const;
  // LookupClassMethod
  // LookupInstanceMethod
  // Protocol_locs
  // Protocols
 private:
  ObjCProtocolDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCProtocolDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCProtocolDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCProtocolDecl));

class PragmaCommentDecl : public Decl {
 public:
  ~PragmaCommentDecl(void) = default;
  PragmaCommentDecl(const PragmaCommentDecl &) = default;
  PragmaCommentDecl(PragmaCommentDecl &&) noexcept = default;
  PragmaCommentDecl &operator=(const PragmaCommentDecl &) = default;
  PragmaCommentDecl &operator=(PragmaCommentDecl &&) noexcept = default;

  std::string_view Arg(void) const;
  // CommentKind
 private:
  PragmaCommentDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit PragmaCommentDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::PragmaCommentDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(PragmaCommentDecl));

class PragmaDetectMismatchDecl : public Decl {
 public:
  ~PragmaDetectMismatchDecl(void) = default;
  PragmaDetectMismatchDecl(const PragmaDetectMismatchDecl &) = default;
  PragmaDetectMismatchDecl(PragmaDetectMismatchDecl &&) noexcept = default;
  PragmaDetectMismatchDecl &operator=(const PragmaDetectMismatchDecl &) = default;
  PragmaDetectMismatchDecl &operator=(PragmaDetectMismatchDecl &&) noexcept = default;

  std::string_view Name(void) const;
  std::string_view Value(void) const;
 private:
  PragmaDetectMismatchDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit PragmaDetectMismatchDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::PragmaDetectMismatchDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(PragmaDetectMismatchDecl));

class RequiresExprBodyDecl : public Decl {
 public:
  ~RequiresExprBodyDecl(void) = default;
  RequiresExprBodyDecl(const RequiresExprBodyDecl &) = default;
  RequiresExprBodyDecl(RequiresExprBodyDecl &&) noexcept = default;
  RequiresExprBodyDecl &operator=(const RequiresExprBodyDecl &) = default;
  RequiresExprBodyDecl &operator=(RequiresExprBodyDecl &&) noexcept = default;

 private:
  RequiresExprBodyDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit RequiresExprBodyDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::RequiresExprBodyDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(RequiresExprBodyDecl));

class StaticAssertDecl : public Decl {
 public:
  ~StaticAssertDecl(void) = default;
  StaticAssertDecl(const StaticAssertDecl &) = default;
  StaticAssertDecl(StaticAssertDecl &&) noexcept = default;
  StaticAssertDecl &operator=(const StaticAssertDecl &) = default;
  StaticAssertDecl &operator=(StaticAssertDecl &&) noexcept = default;

  // AssertExpr
  // Message
  std::optional<::pasta::Token> RParenToken(void) const;
  // TokenRange
  bool IsFailed(void) const;
 private:
  StaticAssertDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit StaticAssertDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::StaticAssertDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(StaticAssertDecl));

class TemplateDecl : public NamedDecl {
 public:
  ~TemplateDecl(void) = default;
  TemplateDecl(const TemplateDecl &) = default;
  TemplateDecl(TemplateDecl &&) noexcept = default;
  TemplateDecl &operator=(const TemplateDecl &) = default;
  TemplateDecl &operator=(TemplateDecl &&) noexcept = default;

  // TokenRange
  // TemplateParameters
  // TemplatedDecl
 private:
  TemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TemplateDecl));

class TemplateTemplateParmDecl : public TemplateDecl {
 public:
  ~TemplateTemplateParmDecl(void) = default;
  TemplateTemplateParmDecl(const TemplateTemplateParmDecl &) = default;
  TemplateTemplateParmDecl(TemplateTemplateParmDecl &&) noexcept = default;
  TemplateTemplateParmDecl &operator=(const TemplateTemplateParmDecl &) = default;
  TemplateTemplateParmDecl &operator=(TemplateTemplateParmDecl &&) noexcept = default;

  bool DefaultArgumentWasInherited(void) const;
  // DefaultArgStorage
  // DefaultArgument
  // ExpansionTemplateParameters
  uint32_t NumExpansionTemplateParameters(void) const;
  // TokenRange
  bool HasDefaultArgument(void) const;
  bool IsExpandedParameterPack(void) const;
  bool IsPackExpansion(void) const;
  bool IsParameterPack(void) const;
 private:
  TemplateTemplateParmDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TemplateTemplateParmDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TemplateTemplateParmDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TemplateTemplateParmDecl));

class TranslationUnitDecl : public Decl {
 public:
  ~TranslationUnitDecl(void) = default;
  TranslationUnitDecl(const TranslationUnitDecl &) = default;
  TranslationUnitDecl(TranslationUnitDecl &&) noexcept = default;
  TranslationUnitDecl &operator=(const TranslationUnitDecl &) = default;
  TranslationUnitDecl &operator=(TranslationUnitDecl &&) noexcept = default;

  // ASTContext
  // AnonymousNamespace
 private:
  TranslationUnitDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TranslationUnitDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TranslationUnitDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TranslationUnitDecl));

class TypeDecl : public NamedDecl {
 public:
  ~TypeDecl(void) = default;
  TypeDecl(const TypeDecl &) = default;
  TypeDecl(TypeDecl &&) noexcept = default;
  TypeDecl &operator=(const TypeDecl &) = default;
  TypeDecl &operator=(TypeDecl &&) noexcept = default;

  std::optional<::pasta::Token> BeginToken(void) const;
  // TokenRange
  // TypeForDecl
 private:
  TypeDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TypeDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TypeDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TypeDecl));

class TypedefNameDecl : public TypeDecl {
 public:
  ~TypedefNameDecl(void) = default;
  TypedefNameDecl(const TypedefNameDecl &) = default;
  TypedefNameDecl(TypedefNameDecl &&) noexcept = default;
  TypedefNameDecl &operator=(const TypedefNameDecl &) = default;
  TypedefNameDecl &operator=(TypedefNameDecl &&) noexcept = default;

  // CanonicalDecl
  // TypeSourceInfo
  // UnderlyingType
  bool IsModed(void) const;
  bool IsTransparentTag(void) const;
 private:
  TypedefNameDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TypedefNameDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TypedefNameDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TypedefNameDecl));

class UnresolvedUsingTypenameDecl : public TypeDecl {
 public:
  ~UnresolvedUsingTypenameDecl(void) = default;
  UnresolvedUsingTypenameDecl(const UnresolvedUsingTypenameDecl &) = default;
  UnresolvedUsingTypenameDecl(UnresolvedUsingTypenameDecl &&) noexcept = default;
  UnresolvedUsingTypenameDecl &operator=(const UnresolvedUsingTypenameDecl &) = default;
  UnresolvedUsingTypenameDecl &operator=(UnresolvedUsingTypenameDecl &&) noexcept = default;

  // CanonicalDecl
  std::optional<::pasta::Token> EllipsisToken(void) const;
  // NameInfo
  // Qualifier
  // QualifierToken
  std::optional<::pasta::Token> TypenameToken(void) const;
  std::optional<::pasta::Token> UsingToken(void) const;
  bool IsPackExpansion(void) const;
 private:
  UnresolvedUsingTypenameDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit UnresolvedUsingTypenameDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::UnresolvedUsingTypenameDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(UnresolvedUsingTypenameDecl));

class UsingDecl : public NamedDecl {
 public:
  ~UsingDecl(void) = default;
  UsingDecl(const UsingDecl &) = default;
  UsingDecl(UsingDecl &&) noexcept = default;
  UsingDecl &operator=(const UsingDecl &) = default;
  UsingDecl &operator=(UsingDecl &&) noexcept = default;

  // CanonicalDecl
  // NameInfo
  // Qualifier
  // QualifierToken
  std::optional<::pasta::Token> UsingToken(void) const;
  bool HasTypename(void) const;
  bool IsAccessDeclaration(void) const;
  // Shadows
 private:
  UsingDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit UsingDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::UsingDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(UsingDecl));

class UsingDirectiveDecl : public NamedDecl {
 public:
  ~UsingDirectiveDecl(void) = default;
  UsingDirectiveDecl(const UsingDirectiveDecl &) = default;
  UsingDirectiveDecl(UsingDirectiveDecl &&) noexcept = default;
  UsingDirectiveDecl &operator=(const UsingDirectiveDecl &) = default;
  UsingDirectiveDecl &operator=(UsingDirectiveDecl &&) noexcept = default;

  // CommonAncestor
  std::optional<::pasta::Token> IdentLocation(void) const;
  std::optional<::pasta::Token> NamespaceKeyLocation(void) const;
  // NominatedNamespace
  // NominatedNamespaceAsWritten
  // Qualifier
  // QualifierToken
  // TokenRange
  std::optional<::pasta::Token> UsingToken(void) const;
 private:
  UsingDirectiveDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit UsingDirectiveDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::UsingDirectiveDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(UsingDirectiveDecl));

class UsingPackDecl : public NamedDecl {
 public:
  ~UsingPackDecl(void) = default;
  UsingPackDecl(const UsingPackDecl &) = default;
  UsingPackDecl(UsingPackDecl &&) noexcept = default;
  UsingPackDecl &operator=(const UsingPackDecl &) = default;
  UsingPackDecl &operator=(UsingPackDecl &&) noexcept = default;

  // Expansions
  // CanonicalDecl
  // InstantiatedFromUsingDecl
  // TokenRange
 private:
  UsingPackDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit UsingPackDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::UsingPackDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(UsingPackDecl));

class UsingShadowDecl : public NamedDecl {
 public:
  ~UsingShadowDecl(void) = default;
  UsingShadowDecl(const UsingShadowDecl &) = default;
  UsingShadowDecl(UsingShadowDecl &&) noexcept = default;
  UsingShadowDecl &operator=(const UsingShadowDecl &) = default;
  UsingShadowDecl &operator=(UsingShadowDecl &&) noexcept = default;

  // CanonicalDecl
  // NextUsingShadowDecl
  // TargetDecl
 private:
  UsingShadowDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit UsingShadowDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::UsingShadowDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(UsingShadowDecl));

class ValueDecl : public NamedDecl {
 public:
  ~ValueDecl(void) = default;
  ValueDecl(const ValueDecl &) = default;
  ValueDecl(ValueDecl &&) noexcept = default;
  ValueDecl &operator=(const ValueDecl &) = default;
  ValueDecl &operator=(ValueDecl &&) noexcept = default;

  // Type
 private:
  ValueDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ValueDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ValueDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ValueDecl));

class AccessSpecDecl : public Decl {
 public:
  ~AccessSpecDecl(void) = default;
  AccessSpecDecl(const AccessSpecDecl &) = default;
  AccessSpecDecl(AccessSpecDecl &&) noexcept = default;
  AccessSpecDecl &operator=(const AccessSpecDecl &) = default;
  AccessSpecDecl &operator=(AccessSpecDecl &&) noexcept = default;

  std::optional<::pasta::Token> AccessSpecifierToken(void) const;
  std::optional<::pasta::Token> ColonToken(void) const;
  // TokenRange
 private:
  AccessSpecDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit AccessSpecDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::AccessSpecDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(AccessSpecDecl));

class BindingDecl : public ValueDecl {
 public:
  ~BindingDecl(void) = default;
  BindingDecl(const BindingDecl &) = default;
  BindingDecl(BindingDecl &&) noexcept = default;
  BindingDecl &operator=(const BindingDecl &) = default;
  BindingDecl &operator=(BindingDecl &&) noexcept = default;

  // Binding
 private:
  BindingDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit BindingDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::BindingDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(BindingDecl));

class BlockDecl : public Decl {
 public:
  ~BlockDecl(void) = default;
  BlockDecl(const BlockDecl &) = default;
  BlockDecl(BlockDecl &&) noexcept = default;
  BlockDecl &operator=(const BlockDecl &) = default;
  BlockDecl &operator=(BlockDecl &&) noexcept = default;

  bool BlockMissingReturnType(void) const;
  bool CanAvoidCopyToHeap(void) const;
  // Captures
  bool CapturesCXXThis(void) const;
  bool DoesNotEscape(void) const;
  // BlockManglingContextDecl
  uint32_t BlockManglingNumber(void) const;
  // Body
  std::optional<::pasta::Token> CaretLocation(void) const;
  // CompoundBody
  uint32_t NumCaptures(void) const;
  uint32_t NumParams(void) const;
  // ParamDecl
  // SignatureAsWritten
  bool HasCaptures(void) const;
  bool IsConversionFromLambda(void) const;
  bool IsVariadic(void) const;
  // Parameters
 private:
  BlockDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit BlockDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::BlockDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(BlockDecl));

class BuiltinTemplateDecl : public TemplateDecl {
 public:
  ~BuiltinTemplateDecl(void) = default;
  BuiltinTemplateDecl(const BuiltinTemplateDecl &) = default;
  BuiltinTemplateDecl(BuiltinTemplateDecl &&) noexcept = default;
  BuiltinTemplateDecl &operator=(const BuiltinTemplateDecl &) = default;
  BuiltinTemplateDecl &operator=(BuiltinTemplateDecl &&) noexcept = default;

  // BuiltinTemplateKind
  // TokenRange
 private:
  BuiltinTemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit BuiltinTemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::BuiltinTemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(BuiltinTemplateDecl));

class CapturedDecl : public Decl {
 public:
  ~CapturedDecl(void) = default;
  CapturedDecl(const CapturedDecl &) = default;
  CapturedDecl(CapturedDecl &&) noexcept = default;
  CapturedDecl &operator=(const CapturedDecl &) = default;
  CapturedDecl &operator=(CapturedDecl &&) noexcept = default;

  // ContextParam
  uint32_t ContextParamPosition(void) const;
  uint32_t NumParams(void) const;
  // Param
  // Parameters
 private:
  CapturedDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit CapturedDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::CapturedDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(CapturedDecl));

class ClassScopeFunctionSpecializationDecl : public Decl {
 public:
  ~ClassScopeFunctionSpecializationDecl(void) = default;
  ClassScopeFunctionSpecializationDecl(const ClassScopeFunctionSpecializationDecl &) = default;
  ClassScopeFunctionSpecializationDecl(ClassScopeFunctionSpecializationDecl &&) noexcept = default;
  ClassScopeFunctionSpecializationDecl &operator=(const ClassScopeFunctionSpecializationDecl &) = default;
  ClassScopeFunctionSpecializationDecl &operator=(ClassScopeFunctionSpecializationDecl &&) noexcept = default;

  // Specialization
  // TemplateArgsAsWritten
  bool HasExplicitTemplateArgs(void) const;
 private:
  ClassScopeFunctionSpecializationDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ClassScopeFunctionSpecializationDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ClassScopeFunctionSpecializationDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ClassScopeFunctionSpecializationDecl));

class ConceptDecl : public TemplateDecl {
 public:
  ~ConceptDecl(void) = default;
  ConceptDecl(const ConceptDecl &) = default;
  ConceptDecl(ConceptDecl &&) noexcept = default;
  ConceptDecl &operator=(const ConceptDecl &) = default;
  ConceptDecl &operator=(ConceptDecl &&) noexcept = default;

  // ConstraintExpr
  // TokenRange
  bool IsTypeConcept(void) const;
 private:
  ConceptDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ConceptDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ConceptDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ConceptDecl));

class ConstructorUsingShadowDecl : public UsingShadowDecl {
 public:
  ~ConstructorUsingShadowDecl(void) = default;
  ConstructorUsingShadowDecl(const ConstructorUsingShadowDecl &) = default;
  ConstructorUsingShadowDecl(ConstructorUsingShadowDecl &&) noexcept = default;
  ConstructorUsingShadowDecl &operator=(const ConstructorUsingShadowDecl &) = default;
  ConstructorUsingShadowDecl &operator=(ConstructorUsingShadowDecl &&) noexcept = default;

  bool ConstructsVirtualBase(void) const;
  // ConstructedBaseClass
  // ConstructedBaseClassShadowDecl
  // NominatedBaseClassShadowDecl
  // Parent
 private:
  ConstructorUsingShadowDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ConstructorUsingShadowDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ConstructorUsingShadowDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ConstructorUsingShadowDecl));

class DeclaratorDecl : public ValueDecl {
 public:
  ~DeclaratorDecl(void) = default;
  DeclaratorDecl(const DeclaratorDecl &) = default;
  DeclaratorDecl(DeclaratorDecl &&) noexcept = default;
  DeclaratorDecl &operator=(const DeclaratorDecl &) = default;
  DeclaratorDecl &operator=(DeclaratorDecl &&) noexcept = default;

  std::optional<::pasta::Token> BeginToken(void) const;
  std::optional<::pasta::Token> InnerLocStart(void) const;
  uint32_t NumTemplateParameterLists(void) const;
  // Qualifier
  // QualifierToken
  // TemplateParameterList
  // TrailingRequiresClause
  // TypeSourceInfo
 private:
  DeclaratorDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit DeclaratorDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::DeclaratorDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(DeclaratorDecl));

class EnumConstantDecl : public ValueDecl {
 public:
  ~EnumConstantDecl(void) = default;
  EnumConstantDecl(const EnumConstantDecl &) = default;
  EnumConstantDecl(EnumConstantDecl &&) noexcept = default;
  EnumConstantDecl &operator=(const EnumConstantDecl &) = default;
  EnumConstantDecl &operator=(EnumConstantDecl &&) noexcept = default;

  // CanonicalDecl
  // InitExpr
  // InitVal
 private:
  EnumConstantDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit EnumConstantDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::EnumConstantDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(EnumConstantDecl));

class FieldDecl : public DeclaratorDecl {
 public:
  ~FieldDecl(void) = default;
  FieldDecl(const FieldDecl &) = default;
  FieldDecl(FieldDecl &&) noexcept = default;
  FieldDecl &operator=(const FieldDecl &) = default;
  FieldDecl &operator=(FieldDecl &&) noexcept = default;

  // BitWidth
  // CanonicalDecl
  // CapturedVLAType
  // InClassInitStyle
  // InClassInitializer
  // Parent
  bool HasCapturedVLAType(void) const;
  bool HasInClassInitializer(void) const;
  bool IsBitField(void) const;
  bool IsMutable(void) const;
  bool IsUnnamedBitfield(void) const;
 private:
  FieldDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit FieldDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::FieldDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(FieldDecl));

class FunctionDecl : public DeclaratorDecl {
 public:
  ~FunctionDecl(void) = default;
  FunctionDecl(const FunctionDecl &) = default;
  FunctionDecl(FunctionDecl &&) noexcept = default;
  FunctionDecl &operator=(const FunctionDecl &) = default;
  FunctionDecl &operator=(FunctionDecl &&) noexcept = default;

  bool DoesThisDeclarationHaveABody(void) const;
  // AssociatedConstraints
  // Body
  // CallResultType
  // CanonicalDecl
  // ConstexprKind
  // DeclaredReturnType
  // Definition
  std::optional<::pasta::Token> EllipsisToken(void) const;
  // ExceptionSpecType
  // NameInfo
  // ParamDecl
  // ReturnType
  // StorageClass
  bool HasBody(void) const;
  bool HasImplicitReturnZero(void) const;
  bool HasInheritedPrototype(void) const;
  bool HasPrototype(void) const;
  bool HasSkippedBody(void) const;
  bool HasWrittenPrototype(void) const;
  bool InstantiationIsPending(void) const;
  bool IsConsteval(void) const;
  bool IsConstexpr(void) const;
  bool IsConstexprSpecified(void) const;
  bool IsDefaulted(void) const;
  bool IsDefined(void) const;
  bool IsDeleted(void) const;
  bool IsDeletedAsWritten(void) const;
  bool IsExplicitlyDefaulted(void) const;
  bool IsFunctionTemplateSpecialization(void) const;
  bool IsInlineSpecified(void) const;
  bool IsInlined(void) const;
  bool IsLateTemplateParsed(void) const;
  bool IsMultiVersion(void) const;
  bool IsOverloadedOperator(void) const;
  bool IsPure(void) const;
  bool IsStatic(void) const;
  bool IsThisDeclarationADefinition(void) const;
  bool IsTrivial(void) const;
  bool IsTrivialForCall(void) const;
  bool IsUserProvided(void) const;
  bool IsVirtualAsWritten(void) const;
  // Parameters
  bool UsesFPIntrin(void) const;
  bool UsesSEHTry(void) const;
  bool WillHaveBody(void) const;
 private:
  FunctionDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit FunctionDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::FunctionDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(FunctionDecl));

class IndirectFieldDecl : public ValueDecl {
 public:
  ~IndirectFieldDecl(void) = default;
  IndirectFieldDecl(const IndirectFieldDecl &) = default;
  IndirectFieldDecl(IndirectFieldDecl &&) noexcept = default;
  IndirectFieldDecl &operator=(const IndirectFieldDecl &) = default;
  IndirectFieldDecl &operator=(IndirectFieldDecl &&) noexcept = default;

  // Chain
  // AnonField
  // CanonicalDecl
  uint32_t ChainingSize(void) const;
  // VarDecl
 private:
  IndirectFieldDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit IndirectFieldDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::IndirectFieldDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(IndirectFieldDecl));

class LabelDecl : public NamedDecl {
 public:
  ~LabelDecl(void) = default;
  LabelDecl(const LabelDecl &) = default;
  LabelDecl(LabelDecl &&) noexcept = default;
  LabelDecl &operator=(const LabelDecl &) = default;
  LabelDecl &operator=(LabelDecl &&) noexcept = default;

  std::string_view MSAsmLabel(void) const;
  // TokenRange
  // Stmt
  bool IsGnuLocal(void) const;
  bool IsMSAsmLabel(void) const;
  bool IsResolvedMSAsmLabel(void) const;
 private:
  LabelDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit LabelDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::LabelDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(LabelDecl));

class MSGuidDecl : public ValueDecl {
 public:
  ~MSGuidDecl(void) = default;
  MSGuidDecl(const MSGuidDecl &) = default;
  MSGuidDecl(MSGuidDecl &&) noexcept = default;
  MSGuidDecl &operator=(const MSGuidDecl &) = default;
  MSGuidDecl &operator=(MSGuidDecl &&) noexcept = default;

  // Parts
 private:
  MSGuidDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit MSGuidDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::MSGuidDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(MSGuidDecl));

class MSPropertyDecl : public DeclaratorDecl {
 public:
  ~MSPropertyDecl(void) = default;
  MSPropertyDecl(const MSPropertyDecl &) = default;
  MSPropertyDecl(MSPropertyDecl &&) noexcept = default;
  MSPropertyDecl &operator=(const MSPropertyDecl &) = default;
  MSPropertyDecl &operator=(MSPropertyDecl &&) noexcept = default;

  // GetterId
  // SetterId
  bool HasGetter(void) const;
  bool HasSetter(void) const;
 private:
  MSPropertyDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit MSPropertyDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::MSPropertyDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(MSPropertyDecl));

class NonTypeTemplateParmDecl : public DeclaratorDecl {
 public:
  ~NonTypeTemplateParmDecl(void) = default;
  NonTypeTemplateParmDecl(const NonTypeTemplateParmDecl &) = default;
  NonTypeTemplateParmDecl(NonTypeTemplateParmDecl &&) noexcept = default;
  NonTypeTemplateParmDecl &operator=(const NonTypeTemplateParmDecl &) = default;
  NonTypeTemplateParmDecl &operator=(NonTypeTemplateParmDecl &&) noexcept = default;

  bool DefaultArgumentWasInherited(void) const;
  // AssociatedConstraints
  // DefaultArgStorage
  // DefaultArgument
  // ExpansionType
  // ExpansionTypeSourceInfo
  uint32_t NumExpansionTypes(void) const;
  // PlaceholderTypeConstraint
  bool HasDefaultArgument(void) const;
  bool HasPlaceholderTypeConstraint(void) const;
  bool IsExpandedParameterPack(void) const;
  bool IsPackExpansion(void) const;
  bool IsParameterPack(void) const;
 private:
  NonTypeTemplateParmDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit NonTypeTemplateParmDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::NonTypeTemplateParmDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(NonTypeTemplateParmDecl));

class OMPDeclareMapperDecl : public ValueDecl {
 public:
  ~OMPDeclareMapperDecl(void) = default;
  OMPDeclareMapperDecl(const OMPDeclareMapperDecl &) = default;
  OMPDeclareMapperDecl(OMPDeclareMapperDecl &&) noexcept = default;
  OMPDeclareMapperDecl &operator=(const OMPDeclareMapperDecl &) = default;
  OMPDeclareMapperDecl &operator=(OMPDeclareMapperDecl &&) noexcept = default;

  // Clauses
  // MapperVarRef
 private:
  OMPDeclareMapperDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit OMPDeclareMapperDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::OMPDeclareMapperDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(OMPDeclareMapperDecl));

class OMPDeclareReductionDecl : public ValueDecl {
 public:
  ~OMPDeclareReductionDecl(void) = default;
  OMPDeclareReductionDecl(const OMPDeclareReductionDecl &) = default;
  OMPDeclareReductionDecl(OMPDeclareReductionDecl &&) noexcept = default;
  OMPDeclareReductionDecl &operator=(const OMPDeclareReductionDecl &) = default;
  OMPDeclareReductionDecl &operator=(OMPDeclareReductionDecl &&) noexcept = default;

  // Combiner
  // CombinerIn
  // CombinerOut
  // InitOrig
  // InitPriv
  // Initializer
  // InitializerKind
 private:
  OMPDeclareReductionDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit OMPDeclareReductionDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::OMPDeclareReductionDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(OMPDeclareReductionDecl));

class ObjCAtDefsFieldDecl : public FieldDecl {
 public:
  ~ObjCAtDefsFieldDecl(void) = default;
  ObjCAtDefsFieldDecl(const ObjCAtDefsFieldDecl &) = default;
  ObjCAtDefsFieldDecl(ObjCAtDefsFieldDecl &&) noexcept = default;
  ObjCAtDefsFieldDecl &operator=(const ObjCAtDefsFieldDecl &) = default;
  ObjCAtDefsFieldDecl &operator=(ObjCAtDefsFieldDecl &&) noexcept = default;

 private:
  ObjCAtDefsFieldDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCAtDefsFieldDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCAtDefsFieldDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCAtDefsFieldDecl));

class ObjCCategoryDecl : public ObjCContainerDecl {
 public:
  ~ObjCCategoryDecl(void) = default;
  ObjCCategoryDecl(const ObjCCategoryDecl &) = default;
  ObjCCategoryDecl(ObjCCategoryDecl &&) noexcept = default;
  ObjCCategoryDecl &operator=(const ObjCCategoryDecl &) = default;
  ObjCCategoryDecl &operator=(ObjCCategoryDecl &&) noexcept = default;

  bool IsClassExtension(void) const;
  std::optional<::pasta::Token> CategoryNameToken(void) const;
  // ClassInterface
  std::optional<::pasta::Token> IvarLBraceToken(void) const;
  std::optional<::pasta::Token> IvarRBraceToken(void) const;
  // NextClassCategory
  // NextClassCategoryRaw
  // ReferencedProtocols
  // TypeParamList
  // Ivars
  // Protocol_locs
  // Protocols
 private:
  ObjCCategoryDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCCategoryDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCCategoryDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCCategoryDecl));

class ObjCCategoryImplDecl : public ObjCImplDecl {
 public:
  ~ObjCCategoryImplDecl(void) = default;
  ObjCCategoryImplDecl(const ObjCCategoryImplDecl &) = default;
  ObjCCategoryImplDecl(ObjCCategoryImplDecl &&) noexcept = default;
  ObjCCategoryImplDecl &operator=(const ObjCCategoryImplDecl &) = default;
  ObjCCategoryImplDecl &operator=(ObjCCategoryImplDecl &&) noexcept = default;

  std::optional<::pasta::Token> CategoryNameToken(void) const;
 private:
  ObjCCategoryImplDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCCategoryImplDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCCategoryImplDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCCategoryImplDecl));

class ObjCIvarDecl : public FieldDecl {
 public:
  ~ObjCIvarDecl(void) = default;
  ObjCIvarDecl(const ObjCIvarDecl &) = default;
  ObjCIvarDecl(ObjCIvarDecl &&) noexcept = default;
  ObjCIvarDecl &operator=(const ObjCIvarDecl &) = default;
  ObjCIvarDecl &operator=(ObjCIvarDecl &&) noexcept = default;

  // AccessControl
  // CanonicalAccessControl
  // NextIvar
  bool Synthesize(void) const;
 private:
  ObjCIvarDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCIvarDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCIvarDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCIvarDecl));

class ObjCTypeParamDecl : public TypedefNameDecl {
 public:
  ~ObjCTypeParamDecl(void) = default;
  ObjCTypeParamDecl(const ObjCTypeParamDecl &) = default;
  ObjCTypeParamDecl(ObjCTypeParamDecl &&) noexcept = default;
  ObjCTypeParamDecl &operator=(const ObjCTypeParamDecl &) = default;
  ObjCTypeParamDecl &operator=(ObjCTypeParamDecl &&) noexcept = default;

  std::optional<::pasta::Token> ColonToken(void) const;
  uint32_t Index(void) const;
  // Variance
  std::optional<::pasta::Token> VarianceToken(void) const;
  bool HasExplicitBound(void) const;
 private:
  ObjCTypeParamDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ObjCTypeParamDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ObjCTypeParamDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ObjCTypeParamDecl));

class RedeclarableTemplateDecl : public TemplateDecl {
 public:
  ~RedeclarableTemplateDecl(void) = default;
  RedeclarableTemplateDecl(const RedeclarableTemplateDecl &) = default;
  RedeclarableTemplateDecl(RedeclarableTemplateDecl &&) noexcept = default;
  RedeclarableTemplateDecl &operator=(const RedeclarableTemplateDecl &) = default;
  RedeclarableTemplateDecl &operator=(RedeclarableTemplateDecl &&) noexcept = default;

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  bool IsMemberSpecialization(void) const;
 private:
  RedeclarableTemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit RedeclarableTemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::RedeclarableTemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(RedeclarableTemplateDecl));

class TagDecl : public TypeDecl {
 public:
  ~TagDecl(void) = default;
  TagDecl(const TagDecl &) = default;
  TagDecl(TagDecl &&) noexcept = default;
  TagDecl &operator=(const TagDecl &) = default;
  TagDecl &operator=(TagDecl &&) noexcept = default;

  // BraceRange
  // CanonicalDecl
  std::optional<::pasta::Token> InnerLocStart(void) const;
  std::string_view KindName(void) const;
  uint32_t NumTemplateParameterLists(void) const;
  // Qualifier
  // QualifierToken
  // TagKind
  // TemplateParameterList
  // TypedefNameForAnonDecl
  bool HasNameForLinkage(void) const;
  bool IsBeingDefined(void) const;
  bool IsClass(void) const;
  bool IsCompleteDefinition(void) const;
  bool IsCompleteDefinitionRequired(void) const;
  bool IsDependentType(void) const;
  bool IsEmbeddedInDeclarator(void) const;
  bool IsEnum(void) const;
  bool IsFreeStanding(void) const;
  bool IsInterface(void) const;
  bool IsStruct(void) const;
  bool IsThisDeclarationADefinition(void) const;
  bool IsUnion(void) const;
  bool MayHaveOutOfDateDef(void) const;
 private:
  TagDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TagDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TagDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TagDecl));

class TemplateTypeParmDecl : public TypeDecl {
 public:
  ~TemplateTypeParmDecl(void) = default;
  TemplateTypeParmDecl(const TemplateTypeParmDecl &) = default;
  TemplateTypeParmDecl(TemplateTypeParmDecl &&) noexcept = default;
  TemplateTypeParmDecl &operator=(const TemplateTypeParmDecl &) = default;
  TemplateTypeParmDecl &operator=(TemplateTypeParmDecl &&) noexcept = default;

  bool DefaultArgumentWasInherited(void) const;
  // AssociatedConstraints
  // DefaultArgStorage
  // DefaultArgument
  // DefaultArgumentInfo
  uint32_t NumExpansionParameters(void) const;
  // TypeConstraint
  bool HasDefaultArgument(void) const;
  bool HasTypeConstraint(void) const;
  bool IsExpandedParameterPack(void) const;
  bool IsPackExpansion(void) const;
  bool WasDeclaredWithTypename(void) const;
 private:
  TemplateTypeParmDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TemplateTypeParmDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TemplateTypeParmDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TemplateTypeParmDecl));

class TypeAliasDecl : public TypedefNameDecl {
 public:
  ~TypeAliasDecl(void) = default;
  TypeAliasDecl(const TypeAliasDecl &) = default;
  TypeAliasDecl(TypeAliasDecl &&) noexcept = default;
  TypeAliasDecl &operator=(const TypeAliasDecl &) = default;
  TypeAliasDecl &operator=(TypeAliasDecl &&) noexcept = default;

  // DescribedAliasTemplate
 private:
  TypeAliasDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TypeAliasDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TypeAliasDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TypeAliasDecl));

class TypeAliasTemplateDecl : public RedeclarableTemplateDecl {
 public:
  ~TypeAliasTemplateDecl(void) = default;
  TypeAliasTemplateDecl(const TypeAliasTemplateDecl &) = default;
  TypeAliasTemplateDecl(TypeAliasTemplateDecl &&) noexcept = default;
  TypeAliasTemplateDecl &operator=(const TypeAliasTemplateDecl &) = default;
  TypeAliasTemplateDecl &operator=(TypeAliasTemplateDecl &&) noexcept = default;

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // PreviousDecl
  // TemplatedDecl
 private:
  TypeAliasTemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TypeAliasTemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TypeAliasTemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TypeAliasTemplateDecl));

class TypedefDecl : public TypedefNameDecl {
 public:
  ~TypedefDecl(void) = default;
  TypedefDecl(const TypedefDecl &) = default;
  TypedefDecl(TypedefDecl &&) noexcept = default;
  TypedefDecl &operator=(const TypedefDecl &) = default;
  TypedefDecl &operator=(TypedefDecl &&) noexcept = default;

 private:
  TypedefDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit TypedefDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::TypedefDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(TypedefDecl));

class UnresolvedUsingValueDecl : public ValueDecl {
 public:
  ~UnresolvedUsingValueDecl(void) = default;
  UnresolvedUsingValueDecl(const UnresolvedUsingValueDecl &) = default;
  UnresolvedUsingValueDecl(UnresolvedUsingValueDecl &&) noexcept = default;
  UnresolvedUsingValueDecl &operator=(const UnresolvedUsingValueDecl &) = default;
  UnresolvedUsingValueDecl &operator=(UnresolvedUsingValueDecl &&) noexcept = default;

  // CanonicalDecl
  std::optional<::pasta::Token> EllipsisToken(void) const;
  // NameInfo
  // Qualifier
  // QualifierToken
  std::optional<::pasta::Token> UsingToken(void) const;
  bool IsAccessDeclaration(void) const;
  bool IsPackExpansion(void) const;
 private:
  UnresolvedUsingValueDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit UnresolvedUsingValueDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::UnresolvedUsingValueDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(UnresolvedUsingValueDecl));

class VarDecl : public DeclaratorDecl {
 public:
  ~VarDecl(void) = default;
  VarDecl(const VarDecl &) = default;
  VarDecl(VarDecl &&) noexcept = default;
  VarDecl &operator=(const VarDecl &) = default;
  VarDecl &operator=(VarDecl &&) noexcept = default;

  // ActingDefinition
  // AnyInitializer
  // CanonicalDecl
  // Init
  // InitStyle
  // InitializingDeclaration
  // StorageClass
  // StorageDuration
  // TSCSpec
  // HasDefinition
  bool HasExternalStorage(void) const;
  bool HasGlobalStorage(void) const;
  bool HasLocalStorage(void) const;
  bool IsARCPseudoStrong(void) const;
  bool IsCXXForRangeDecl(void) const;
  bool IsConstexpr(void) const;
  bool IsDirectInit(void) const;
  bool IsExceptionVariable(void) const;
  bool IsFileVarDecl(void) const;
  bool IsFunctionOrMethodVarDecl(void) const;
  bool IsInitCapture(void) const;
  bool IsInline(void) const;
  bool IsInlineSpecified(void) const;
  bool IsLocalVarDecl(void) const;
  bool IsLocalVarDeclOrParm(void) const;
  bool IsNRVOVariable(void) const;
  bool IsObjCForDecl(void) const;
  bool IsPreviousDeclInSameBlockScope(void) const;
  bool IsStaticDataMember(void) const;
  bool IsStaticLocal(void) const;
  // IsThisDeclarationADefinition
  bool IsThisDeclarationADemotedDefinition(void) const;
 private:
  VarDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit VarDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::VarDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(VarDecl));

class VarTemplateDecl : public RedeclarableTemplateDecl {
 public:
  ~VarTemplateDecl(void) = default;
  VarTemplateDecl(const VarTemplateDecl &) = default;
  VarTemplateDecl(VarTemplateDecl &&) noexcept = default;
  VarTemplateDecl &operator=(const VarTemplateDecl &) = default;
  VarTemplateDecl &operator=(VarTemplateDecl &&) noexcept = default;

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // MostRecentDecl
  // PreviousDecl
  // TemplatedDecl
  bool IsThisDeclarationADefinition(void) const;
  // Specializations
 private:
  VarTemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit VarTemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::VarTemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(VarTemplateDecl));

class VarTemplateSpecializationDecl : public VarDecl {
 public:
  ~VarTemplateSpecializationDecl(void) = default;
  VarTemplateSpecializationDecl(const VarTemplateSpecializationDecl &) = default;
  VarTemplateSpecializationDecl(VarTemplateSpecializationDecl &&) noexcept = default;
  VarTemplateSpecializationDecl &operator=(const VarTemplateSpecializationDecl &) = default;
  VarTemplateSpecializationDecl &operator=(VarTemplateSpecializationDecl &&) noexcept = default;

  // Profile
  std::optional<::pasta::Token> ExternToken(void) const;
  // InstantiatedFrom
  std::optional<::pasta::Token> PointOfInstantiation(void) const;
  // SpecializationKind
  // SpecializedTemplateOrPartial
  // TemplateArgs
  // TemplateArgsInfo
  // TemplateInstantiationArgs
  std::optional<::pasta::Token> TemplateKeywordToken(void) const;
  // TypeAsWritten
  bool IsClassScopeExplicitSpecialization(void) const;
  bool IsExplicitInstantiationOrSpecialization(void) const;
  bool IsExplicitSpecialization(void) const;
 private:
  VarTemplateSpecializationDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit VarTemplateSpecializationDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::VarTemplateSpecializationDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(VarTemplateSpecializationDecl));

class CXXDeductionGuideDecl : public FunctionDecl {
 public:
  ~CXXDeductionGuideDecl(void) = default;
  CXXDeductionGuideDecl(const CXXDeductionGuideDecl &) = default;
  CXXDeductionGuideDecl(CXXDeductionGuideDecl &&) noexcept = default;
  CXXDeductionGuideDecl &operator=(const CXXDeductionGuideDecl &) = default;
  CXXDeductionGuideDecl &operator=(CXXDeductionGuideDecl &&) noexcept = default;

  // DeducedTemplate
  // ExplicitSpecifier
  bool IsCopyDeductionCandidate(void) const;
  bool IsExplicit(void) const;
 private:
  CXXDeductionGuideDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit CXXDeductionGuideDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::CXXDeductionGuideDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(CXXDeductionGuideDecl));

class CXXMethodDecl : public FunctionDecl {
 public:
  ~CXXMethodDecl(void) = default;
  CXXMethodDecl(const CXXMethodDecl &) = default;
  CXXMethodDecl(CXXMethodDecl &&) noexcept = default;
  CXXMethodDecl &operator=(const CXXMethodDecl &) = default;
  CXXMethodDecl &operator=(CXXMethodDecl &&) noexcept = default;

  // CanonicalDecl
  // CorrespondingMethodDeclaredInClass
  // CorrespondingMethodInClass
  // DevirtualizedMethod
  // MethodQualifiers
  // MostRecentDecl
  // Parent
  // RefQualifier
  bool IsConst(void) const;
  bool IsInstance(void) const;
  bool IsVirtual(void) const;
  bool IsVolatile(void) const;
 private:
  CXXMethodDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit CXXMethodDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::CXXMethodDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(CXXMethodDecl));

class ClassTemplateDecl : public RedeclarableTemplateDecl {
 public:
  ~ClassTemplateDecl(void) = default;
  ClassTemplateDecl(const ClassTemplateDecl &) = default;
  ClassTemplateDecl(ClassTemplateDecl &&) noexcept = default;
  ClassTemplateDecl &operator=(const ClassTemplateDecl &) = default;
  ClassTemplateDecl &operator=(ClassTemplateDecl &&) noexcept = default;

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // MostRecentDecl
  // PreviousDecl
  // TemplatedDecl
  bool IsThisDeclarationADefinition(void) const;
  // Specializations
 private:
  ClassTemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ClassTemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ClassTemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ClassTemplateDecl));

class DecompositionDecl : public VarDecl {
 public:
  ~DecompositionDecl(void) = default;
  DecompositionDecl(const DecompositionDecl &) = default;
  DecompositionDecl(DecompositionDecl &&) noexcept = default;
  DecompositionDecl &operator=(const DecompositionDecl &) = default;
  DecompositionDecl &operator=(DecompositionDecl &&) noexcept = default;

  // Bindings
 private:
  DecompositionDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit DecompositionDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::DecompositionDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(DecompositionDecl));

class EnumDecl : public TagDecl {
 public:
  ~EnumDecl(void) = default;
  EnumDecl(const EnumDecl &) = default;
  EnumDecl(EnumDecl &&) noexcept = default;
  EnumDecl &operator=(const EnumDecl &) = default;
  EnumDecl &operator=(EnumDecl &&) noexcept = default;

  // Enumerators
  // CanonicalDecl
  // Definition
  // IntegerType
  // IntegerTypeSourceInfo
  // MemberSpecializationInfo
  // MostRecentDecl
  uint32_t NumNegativeBits(void) const;
  uint32_t NumPositiveBits(void) const;
  // PreviousDecl
  // PromotionType
  bool IsComplete(void) const;
  bool IsFixed(void) const;
  bool IsScoped(void) const;
  bool IsScopedUsingClassTag(void) const;
 private:
  EnumDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit EnumDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::EnumDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(EnumDecl));

class FunctionTemplateDecl : public RedeclarableTemplateDecl {
 public:
  ~FunctionTemplateDecl(void) = default;
  FunctionTemplateDecl(const FunctionTemplateDecl &) = default;
  FunctionTemplateDecl(FunctionTemplateDecl &&) noexcept = default;
  FunctionTemplateDecl &operator=(const FunctionTemplateDecl &) = default;
  FunctionTemplateDecl &operator=(FunctionTemplateDecl &&) noexcept = default;

  // CanonicalDecl
  // InstantiatedFromMemberTemplate
  // MostRecentDecl
  // PreviousDecl
  // TemplatedDecl
  bool IsAbbreviated(void) const;
  bool IsThisDeclarationADefinition(void) const;
  // Specializations
 private:
  FunctionTemplateDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit FunctionTemplateDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::FunctionTemplateDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(FunctionTemplateDecl));

class ImplicitParamDecl : public VarDecl {
 public:
  ~ImplicitParamDecl(void) = default;
  ImplicitParamDecl(const ImplicitParamDecl &) = default;
  ImplicitParamDecl(ImplicitParamDecl &&) noexcept = default;
  ImplicitParamDecl &operator=(const ImplicitParamDecl &) = default;
  ImplicitParamDecl &operator=(ImplicitParamDecl &&) noexcept = default;

  // ParameterKind
 private:
  ImplicitParamDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ImplicitParamDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ImplicitParamDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ImplicitParamDecl));

class OMPCapturedExprDecl : public VarDecl {
 public:
  ~OMPCapturedExprDecl(void) = default;
  OMPCapturedExprDecl(const OMPCapturedExprDecl &) = default;
  OMPCapturedExprDecl(OMPCapturedExprDecl &&) noexcept = default;
  OMPCapturedExprDecl &operator=(const OMPCapturedExprDecl &) = default;
  OMPCapturedExprDecl &operator=(OMPCapturedExprDecl &&) noexcept = default;

 private:
  OMPCapturedExprDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit OMPCapturedExprDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::OMPCapturedExprDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(OMPCapturedExprDecl));

class ParmVarDecl : public VarDecl {
 public:
  ~ParmVarDecl(void) = default;
  ParmVarDecl(const ParmVarDecl &) = default;
  ParmVarDecl(ParmVarDecl &&) noexcept = default;
  ParmVarDecl &operator=(const ParmVarDecl &) = default;
  ParmVarDecl &operator=(ParmVarDecl &&) noexcept = default;

  // DefaultArg
  uint32_t FunctionScopeDepth(void) const;
  uint32_t FunctionScopeIndex(void) const;
  // ObjCDeclQualifier
  // UninstantiatedDefaultArg
  bool HasInheritedDefaultArg(void) const;
  bool HasUninstantiatedDefaultArg(void) const;
  bool HasUnparsedDefaultArg(void) const;
  bool IsKNRPromoted(void) const;
  bool IsObjCMethodParameter(void) const;
 private:
  ParmVarDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ParmVarDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ParmVarDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ParmVarDecl));

class RecordDecl : public TagDecl {
 public:
  ~RecordDecl(void) = default;
  RecordDecl(const RecordDecl &) = default;
  RecordDecl(RecordDecl &&) noexcept = default;
  RecordDecl &operator=(const RecordDecl &) = default;
  RecordDecl &operator=(RecordDecl &&) noexcept = default;

  bool CanPassInRegisters(void) const;
  // Fields
  // ArgPassingRestrictions
  // Definition
  // MostRecentDecl
  // PreviousDecl
  bool HasFlexibleArrayMember(void) const;
  bool HasLoadedFieldsFromExternalStorage(void) const;
  bool HasNonTrivialToPrimitiveCopyCUnion(void) const;
  bool HasNonTrivialToPrimitiveDefaultInitializeCUnion(void) const;
  bool HasNonTrivialToPrimitiveDestructCUnion(void) const;
  bool HasObjectMember(void) const;
  bool HasVolatileMember(void) const;
  bool IsAnonymousStructOrUnion(void) const;
  bool IsNonTrivialToPrimitiveCopy(void) const;
  bool IsNonTrivialToPrimitiveDefaultInitialize(void) const;
  bool IsNonTrivialToPrimitiveDestroy(void) const;
  bool IsParamDestroyedInCallee(void) const;
 private:
  RecordDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit RecordDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::RecordDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(RecordDecl));

class VarTemplatePartialSpecializationDecl : public VarTemplateSpecializationDecl {
 public:
  ~VarTemplatePartialSpecializationDecl(void) = default;
  VarTemplatePartialSpecializationDecl(const VarTemplatePartialSpecializationDecl &) = default;
  VarTemplatePartialSpecializationDecl(VarTemplatePartialSpecializationDecl &&) noexcept = default;
  VarTemplatePartialSpecializationDecl &operator=(const VarTemplatePartialSpecializationDecl &) = default;
  VarTemplatePartialSpecializationDecl &operator=(VarTemplatePartialSpecializationDecl &&) noexcept = default;

  // Profile
  // AssociatedConstraints
  // InstantiatedFromMember
  // TemplateArgsAsWritten
  // TemplateParameters
  bool HasAssociatedConstraints(void) const;
 private:
  VarTemplatePartialSpecializationDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit VarTemplatePartialSpecializationDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::VarTemplatePartialSpecializationDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(VarTemplatePartialSpecializationDecl));

class CXXConstructorDecl : public CXXMethodDecl {
 public:
  ~CXXConstructorDecl(void) = default;
  CXXConstructorDecl(const CXXConstructorDecl &) = default;
  CXXConstructorDecl(CXXConstructorDecl &&) noexcept = default;
  CXXConstructorDecl &operator=(const CXXConstructorDecl &) = default;
  CXXConstructorDecl &operator=(CXXConstructorDecl &&) noexcept = default;

  // CanonicalDecl
  // ExplicitSpecifier
  // InheritedConstructor
  uint32_t NumCtorInitializers(void) const;
  // Inits
  bool IsCopyConstructor(void) const;
  bool IsCopyOrMoveConstructor(void) const;
  bool IsDelegatingConstructor(void) const;
  bool IsExplicit(void) const;
  bool IsInheritingConstructor(void) const;
  bool IsMoveConstructor(void) const;
 private:
  CXXConstructorDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit CXXConstructorDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::CXXConstructorDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(CXXConstructorDecl));

class CXXConversionDecl : public CXXMethodDecl {
 public:
  ~CXXConversionDecl(void) = default;
  CXXConversionDecl(const CXXConversionDecl &) = default;
  CXXConversionDecl(CXXConversionDecl &&) noexcept = default;
  CXXConversionDecl &operator=(const CXXConversionDecl &) = default;
  CXXConversionDecl &operator=(CXXConversionDecl &&) noexcept = default;

  // CanonicalDecl
  // ConversionType
  // ExplicitSpecifier
  bool IsExplicit(void) const;
 private:
  CXXConversionDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit CXXConversionDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::CXXConversionDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(CXXConversionDecl));

class CXXDestructorDecl : public CXXMethodDecl {
 public:
  ~CXXDestructorDecl(void) = default;
  CXXDestructorDecl(const CXXDestructorDecl &) = default;
  CXXDestructorDecl(CXXDestructorDecl &&) noexcept = default;
  CXXDestructorDecl &operator=(const CXXDestructorDecl &) = default;
  CXXDestructorDecl &operator=(CXXDestructorDecl &&) noexcept = default;

  // CanonicalDecl
  // OperatorDelete
  // OperatorDeleteThisArg
 private:
  CXXDestructorDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit CXXDestructorDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::CXXDestructorDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(CXXDestructorDecl));

class CXXRecordDecl : public RecordDecl {
 public:
  ~CXXRecordDecl(void) = default;
  CXXRecordDecl(const CXXRecordDecl &) = default;
  CXXRecordDecl(CXXRecordDecl &&) noexcept = default;
  CXXRecordDecl &operator=(const CXXRecordDecl &) = default;
  CXXRecordDecl &operator=(CXXRecordDecl &&) noexcept = default;

  bool AllowConstDefaultInit(void) const;
  // Bases
  // Captures
  // Constructors
  bool DefaultedCopyConstructorIsDeleted(void) const;
  bool DefaultedDefaultConstructorIsConstexpr(void) const;
  bool DefaultedDestructorIsConstexpr(void) const;
  bool DefaultedDestructorIsDeleted(void) const;
  bool DefaultedMoveConstructorIsDeleted(void) const;
  // Friends
  // CanonicalDecl
  // Definition
  // LambdaCaptureDefault
  uint32_t LambdaManglingNumber(void) const;
  // LambdaTypeInfo
  // MostRecentDecl
  // MostRecentNonInjectedDecl
  uint32_t NumBases(void) const;
  uint32_t NumVBases(void) const;
  // PreviousDecl
  bool HasConstexprDefaultConstructor(void) const;
  bool HasConstexprNonCopyMoveConstructor(void) const;
  bool HasCopyAssignmentWithConstParam(void) const;
  bool HasCopyConstructorWithConstParam(void) const;
  bool HasDefaultConstructor(void) const;
  bool HasDefinition(void) const;
  bool HasDirectFields(void) const;
  bool HasFriends(void) const;
  bool HasInClassInitializer(void) const;
  bool HasInheritedAssignment(void) const;
  bool HasInheritedConstructor(void) const;
  bool HasIrrelevantDestructor(void) const;
  bool HasKnownLambdaInternalLinkage(void) const;
  bool HasMoveAssignment(void) const;
  bool HasMoveConstructor(void) const;
  bool HasMutableFields(void) const;
  bool HasNonLiteralTypeFieldsOrBases(void) const;
  bool HasNonTrivialCopyAssignment(void) const;
  bool HasNonTrivialCopyConstructor(void) const;
  bool HasNonTrivialCopyConstructorForCall(void) const;
  bool HasNonTrivialDefaultConstructor(void) const;
  bool HasNonTrivialDestructor(void) const;
  bool HasNonTrivialDestructorForCall(void) const;
  bool HasNonTrivialMoveAssignment(void) const;
  bool HasNonTrivialMoveConstructor(void) const;
  bool HasNonTrivialMoveConstructorForCall(void) const;
  bool HasPrivateFields(void) const;
  bool HasProtectedFields(void) const;
  bool HasSimpleCopyAssignment(void) const;
  bool HasSimpleCopyConstructor(void) const;
  bool HasSimpleDestructor(void) const;
  bool HasSimpleMoveAssignment(void) const;
  bool HasSimpleMoveConstructor(void) const;
  bool HasTrivialCopyAssignment(void) const;
  bool HasTrivialCopyConstructor(void) const;
  bool HasTrivialCopyConstructorForCall(void) const;
  bool HasTrivialDefaultConstructor(void) const;
  bool HasTrivialDestructor(void) const;
  bool HasTrivialDestructorForCall(void) const;
  bool HasTrivialMoveAssignment(void) const;
  bool HasTrivialMoveConstructor(void) const;
  bool HasTrivialMoveConstructorForCall(void) const;
  bool HasUninitializedReferenceMember(void) const;
  bool HasUserDeclaredConstructor(void) const;
  bool HasUserDeclaredCopyAssignment(void) const;
  bool HasUserDeclaredCopyConstructor(void) const;
  bool HasUserDeclaredDestructor(void) const;
  bool HasUserDeclaredMoveAssignment(void) const;
  bool HasUserDeclaredMoveConstructor(void) const;
  bool HasUserDeclaredMoveOperation(void) const;
  bool HasUserProvidedDefaultConstructor(void) const;
  bool HasVariantMembers(void) const;
  bool ImplicitCopyAssignmentHasConstParam(void) const;
  bool ImplicitCopyConstructorHasConstParam(void) const;
  bool IsAbstract(void) const;
  bool IsAggregate(void) const;
  bool IsCXX11StandardLayout(void) const;
  bool IsDependentLambda(void) const;
  bool IsDynamicClass(void) const;
  bool IsEmpty(void) const;
  bool IsLambda(void) const;
  bool IsLiteral(void) const;
  // IsLocalClass
  bool IsPOD(void) const;
  bool IsParsingBaseSpecifiers(void) const;
  bool IsPolymorphic(void) const;
  bool IsStandardLayout(void) const;
  bool IsTrivial(void) const;
  bool MayBeDynamicClass(void) const;
  bool MayBeNonDynamicClass(void) const;
  // Methods
  bool NeedsImplicitCopyAssignment(void) const;
  bool NeedsImplicitCopyConstructor(void) const;
  bool NeedsImplicitDefaultConstructor(void) const;
  bool NeedsImplicitDestructor(void) const;
  bool NeedsImplicitMoveAssignment(void) const;
  bool NeedsImplicitMoveConstructor(void) const;
  bool NeedsOverloadResolutionForCopyAssignment(void) const;
  bool NeedsOverloadResolutionForCopyConstructor(void) const;
  bool NeedsOverloadResolutionForDestructor(void) const;
  bool NeedsOverloadResolutionForMoveAssignment(void) const;
  bool NeedsOverloadResolutionForMoveConstructor(void) const;
  // VirtualBases
 private:
  CXXRecordDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit CXXRecordDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::CXXRecordDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(CXXRecordDecl));

class ClassTemplateSpecializationDecl : public CXXRecordDecl {
 public:
  ~ClassTemplateSpecializationDecl(void) = default;
  ClassTemplateSpecializationDecl(const ClassTemplateSpecializationDecl &) = default;
  ClassTemplateSpecializationDecl(ClassTemplateSpecializationDecl &&) noexcept = default;
  ClassTemplateSpecializationDecl &operator=(const ClassTemplateSpecializationDecl &) = default;
  ClassTemplateSpecializationDecl &operator=(ClassTemplateSpecializationDecl &&) noexcept = default;

  // Profile
  std::optional<::pasta::Token> ExternToken(void) const;
  // InstantiatedFrom
  std::optional<::pasta::Token> PointOfInstantiation(void) const;
  // SpecializationKind
  // SpecializedTemplateOrPartial
  // TemplateArgs
  // TemplateInstantiationArgs
  std::optional<::pasta::Token> TemplateKeywordToken(void) const;
  // TypeAsWritten
  bool IsClassScopeExplicitSpecialization(void) const;
  bool IsExplicitInstantiationOrSpecialization(void) const;
  bool IsExplicitSpecialization(void) const;
 private:
  ClassTemplateSpecializationDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ClassTemplateSpecializationDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ClassTemplateSpecializationDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ClassTemplateSpecializationDecl));

class ClassTemplatePartialSpecializationDecl : public ClassTemplateSpecializationDecl {
 public:
  ~ClassTemplatePartialSpecializationDecl(void) = default;
  ClassTemplatePartialSpecializationDecl(const ClassTemplatePartialSpecializationDecl &) = default;
  ClassTemplatePartialSpecializationDecl(ClassTemplatePartialSpecializationDecl &&) noexcept = default;
  ClassTemplatePartialSpecializationDecl &operator=(const ClassTemplatePartialSpecializationDecl &) = default;
  ClassTemplatePartialSpecializationDecl &operator=(ClassTemplatePartialSpecializationDecl &&) noexcept = default;

  // Profile
  // AssociatedConstraints
  // InjectedSpecializationType
  // InstantiatedFromMember
  // InstantiatedFromMemberTemplate
  // TemplateArgsAsWritten
  // TemplateParameters
  bool HasAssociatedConstraints(void) const;
 private:
  ClassTemplatePartialSpecializationDecl(void) = delete;

  friend class AST;
  friend class ASTImpl;

 protected:
  explicit ClassTemplatePartialSpecializationDecl(
      std::shared_ptr<ASTImpl> ast_,
      const ::clang::ClassTemplatePartialSpecializationDecl *decl_);
};

static_assert(sizeof(Decl) == sizeof(ClassTemplatePartialSpecializationDecl));

}  // namespace pasta