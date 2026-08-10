//
// Created by Chidume Nnamdi on 07/08/2026.
//

#ifndef FORGENASM_LEXER_H
#define FORGENASM_LEXER_H
#include <string>
#include <vector>

#include "Token/Token.h"
#include "registers/Registers.h"

namespace lexer {
    class Lexer {
        std::vector<Token> tokens;
        int index = 0;
        const std::string &asm_text;

    public:
        std::vector<Token> start();

        explicit Lexer(const std::string &asm_text) : asm_text(asm_text) {};

        ~Lexer();

    private:

        [[nodiscard]] char current_char() const;
        void advance(int steps = 1);
        [[nodiscard]] bool eof() const;

        void consumeComment();
        bool isNumber() const;
        bool isIdentifier() const;

        void collectNumber();

        void collectIdentifier();

        void parse();

    };

} // lexer

#endif //FORGENASM_LEXER_H
