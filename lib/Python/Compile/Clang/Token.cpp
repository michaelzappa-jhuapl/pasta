/*
 * Copyright (c) 2021 Trail of Bits, Inc.
 */

#include "Clang.h"

#include <clang/Basic/IdentifierTable.h>

namespace pasta {
namespace py {

TokenKind::~TokenKind(void) {}

TokenKind::TokenKind(void) {
  PythonErrorStreamer(PyExc_NotImplementedError)
      << "pasta.TokenKind cannot be directly instantiated.";
}

std::string_view TokenKind::Str(void) const {
  return clang::tok::getTokenName(*kind);
}

// Tried to add the `TokenKind` type to the `pasta` module.
bool TokenKind::TryAddToModule(PyObject *module) {
  gType.tp_name = "pasta.TokenKind";
  gType.tp_doc = "Clang token kind.";
  gType.tp_methods = nullptr;
  gType.tp_str = [] (PyObject *self_) {
    auto self = reinterpret_cast<TokenKind*>(self_);
    return convert::FromStdStrView(self->Str());
  };
  if (0 != PyType_Ready(&gType)) {
    return false;
  }

  Py_INCREF(&gType);
  return !PyModule_AddObject(module, "TokenKind",
                             reinterpret_cast<PyObject *>(&gType));
}

namespace {
DEFINE_PYTHON_METHOD(Token, Kind, kind);
DEFINE_PYTHON_METHOD(Token, Length, length);
DEFINE_PYTHON_METHOD(Token, Data, data);

static PyGetSetDef gTokenGettersSetters[] = {
  PYTHON_GETTER(kind, "The token kind"),
  PYTHON_GETTER(length, "Token length"),
  PYTHON_GETTER(data, "The token data."),
  PYTHON_GETTER_SETTER_SENTINEL
};
} // namespace

Token::~Token(void) {}

Token::Token(void) {
  PythonErrorStreamer(PyExc_NotImplementedError)
      << "past.Token cannot be directly instantiated.";
}

BorrowedPythonPtr<TokenKind> Token::Kind(void) {
  return TokenKind::New(token->getKind());
}

unsigned Token::Length(void) {
  return token->getLength();
}

std::string_view Token::Data(void) {
  if (token->isLiteral()) {
    return token->getLiteralData();
  }
  if (token->is(clang::tok::raw_identifier)) {
    return token->getRawIdentifier().data();
  }
  if (token->isAnnotation()) {
    return "";
  }
  const auto *ii = token->getIdentifierInfo();
  if (!ii) {
    return "";
  }
  return ii->getName().data();
}

// Tries to add the `Token` type to the `pasta` module.
bool Token::TryAddToModule(PyObject *module) {
  gType.tp_name = "pasta.Token";
  gType.tp_doc = "Clang token.";
  gType.tp_methods = nullptr;
  gType.tp_getset = gTokenGettersSetters;
  if (0 != PyType_Ready(&gType)) {
    return false;
  }

  Py_INCREF(&gType);
  return !PyModule_AddObject(module, "Token",
                             reinterpret_cast<PyObject *>(&gType));
}

} // namespace py
} // namespace pasta