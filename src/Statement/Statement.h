//
// Created by Chidume Nnamdi on 10/08/2026.
//

#ifndef FORGENASM_STATEMENT_H
#define FORGENASM_STATEMENT_H
#include <variant>

#include "Instruction/Instruction.h"
#include "Label/Label.h"

using Statement = std::variant<Instruction, Label>;

#endif //FORGENASM_STATEMENT_H
