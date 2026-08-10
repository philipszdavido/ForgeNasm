//
// Created by Chidume Nnamdi on 09/08/2026.
//

#ifndef FORGENASM_TOKEN_H
#define FORGENASM_TOKEN_H
#include <string>
#include <utility>

#include "TokenType/TokenType.h"

using namespace std;

class Token {
public:
    TokenType tokenType;
    string value;
    Token(const TokenType tokenType, string value) : tokenType(tokenType), value(std::move(value)) {}
};

#endif //FORGENASM_TOKEN_H
