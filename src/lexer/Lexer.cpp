//
// Created by Chidume Nnamdi on 07/08/2026.
//

#include "Lexer.h"

// op operand operand semi-colon comment /n

namespace lexer {

    Lexer::~Lexer() = default;

    void Lexer::consumeComment() {
        // consume till /n newline
        while (!eof()) {
            advance();

            if (current_char() == '\n') {
                advance();
                return;
            }
        }
    }

    bool Lexer::isNumber() const {
        const char c = current_char();
        if (c >= '0' && c <= '9') return true;
        return false;
    }

    bool Lexer::isIdentifier() const {

        const char c = current_char();
        if (isalnum(c)) return true;
        return false;

    }

    void Lexer::collectNumber() {

        string number;

        while (!eof() && isNumber()) {
            number += current_char();
            advance();
        }

        Token token = Token(TokenType::Number, number);
        tokens.push_back(token);

        advance(-1);

    }

    void Lexer::collectIdentifier() {

        string identifier;

        while (!eof() && isIdentifier()) {
            identifier += current_char();
            advance();
        }

        if (registers_map.contains(identifier)) {
            Token token = Token(TokenType::Register, identifier);
            tokens.push_back(token);
        } else {
            Token token = Token(TokenType::Identifier, identifier);
            tokens.push_back(token);
        }

        advance(-1);

    }

    void Lexer::parse() {

        const int size = static_cast<int>(asm_text.size());

        while (index < size) {

            const char c = current_char();

            switch (c) {
                case ' ': {
                    break;
                }

                case ';': {
                    consumeComment();
                    break;
                }

                case ',': {
                    Token token = Token(TokenType::Comma, ",");
                    tokens.push_back(token);
                    break;
                }

                case ':': {
                    Token token = Token(TokenType::Colon, ":");
                    tokens.push_back(token);
                    break;
                }

                default: {

                    // check if char is number
                    if (isNumber()) {
                        collectNumber();
                    }
                    // check if is identifier
                    else if (isIdentifier()) {
                        collectIdentifier();
                    }

                    break;
                }
            }

            advance();

        }
    }

    std::vector<Token> Lexer::start() {
        this->parse();
        return tokens;
    }

    char Lexer::current_char() const {
        return asm_text.at(index);
    }

    void Lexer::advance(const int steps) {
        index += steps;
    }

    bool Lexer::eof() const {
        return index == asm_text.size();
    }

} // lexer