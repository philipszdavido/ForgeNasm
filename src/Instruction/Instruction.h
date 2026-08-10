//
// Created by Chidume Nnamdi on 10/08/2026.
//

#ifndef FORGENASM_INSTRUCTION_H
#define FORGENASM_INSTRUCTION_H
#include <utility>
#include <vector>
#include <string>

#include "Operands/Operands.h"

using namespace std;

class Instruction {
public:
    const string mnemonic;
    /**
     *
     */
    std::vector<Operand> operands;
    Instruction(string  mnemonic, std::vector<Operand> operands) : mnemonic(std::move(mnemonic)), operands(std::move(operands)) {};
};


#endif //FORGENASM_INSTRUCTION_H
