/*
 * Copyright (c) 2023 Trail of Bits, Inc.
 */

// This file is auto-generated.

#include <pasta/AST/AST.h>
#include <pasta/AST/Attr.h>
#include <pasta/AST/Decl.h>
#include <pasta/AST/Stmt.h>
#include <pasta/AST/Type.h>

#include <nanobind/nanobind.h>
#include <nanobind/stl/optional.h>
#include <nanobind/stl/vector.h>

namespace pasta {
namespace nb = nanobind;

void RegisterCharacterLiteral(nb::module_ &m) {
  nb::class_<CharacterLiteral, Expr>(m, "CharacterLiteral")
    .def("__hash__", [](const CharacterLiteral& stmt) { return (intptr_t)stmt.RawStmt(); })
    .def("__eq__", [](const Stmt& a, const Stmt& b) { return a.RawStmt() == b.RawStmt(); })
    .def_prop_ro("children", &CharacterLiteral::Children)
    .def_prop_ro("begin_token", &CharacterLiteral::BeginToken)
    .def_prop_ro("end_token", &CharacterLiteral::EndToken)
    .def_prop_ro("kind", &CharacterLiteral::Kind)
    .def_prop_ro("token", &CharacterLiteral::Token)
    .def_prop_ro("value", &CharacterLiteral::Value);
}
} // namespace pasta