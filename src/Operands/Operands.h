//
// Created by Chidume Nnamdi on 10/08/2026.
//

#ifndef FORGENASM_OPERANDS_H
#define FORGENASM_OPERANDS_H
#include <cstdint>
#include <optional>
#include <string>
#include <variant>

using namespace std;

struct RegisterOperand {
    uint8_t index;
    bool is64;
};

struct ImmediateOperand {
    int64_t value;
};

struct LabelOperand {
    std::string name;
};

struct MemoryOperand {
    RegisterOperand base;

    optional<RegisterOperand> index;
    int64_t offset = 0;

    bool writeback = false;
};

using Operand = std::variant<
    RegisterOperand,
    ImmediateOperand,
    LabelOperand,
    MemoryOperand
>;

#endif //FORGENASM_OPERANDS_H
