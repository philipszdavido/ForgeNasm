//
// Created by Chidume Nnamdi on 09/08/2026.
//

#ifndef FORGENASM_PARSER_H
#define FORGENASM_PARSER_H
#include <utility>

#include "Statement/Statement.h"
#include "Token/Token.h"

struct Program {
    std::vector<Statement> statements;
};

class Parser {
    Program program;
    vector<Token> tokens;

public:
    explicit Parser(vector<Token> tokens) : tokens(std::move(tokens)) {};
    Program parse();
};


#endif //FORGENASM_PARSER_H
