//
// Created by Chidume Nnamdi on 09/08/2026.
//

#ifndef FORGENASM_REGISTERS_H
#define FORGENASM_REGISTERS_H

#include <unordered_map>
#include <string>

using namespace std;

enum class RegisterClass {
    GPR,
    SIMD,
    SP,
    ZERO
};

enum class RegisterWidth {
    W8   = 8,
    W16  = 16,
    W32  = 32,
    W64  = 64,
    W128 = 128
};

struct Register {
    RegisterClass cls;
    uint8_t number;
    RegisterWidth width;
};

// extern unordered_map<string, Register> registers;

extern  unordered_map<string, string> registers_map;

#endif //FORGENASM_REGISTERS_H
