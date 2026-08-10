cmake_minimum_required(VERSION 4.3)
project(forgenasm)

set(CMAKE_CXX_STANDARD 26)

add_executable(forgenasm main.cpp
        src/lexer/Lexer.cpp
        src/lexer/Lexer.h
        src/Token/Token.cpp
        src/Token/Token.h
        src/TokenType/TokenType.h
        src/Token/Token.h
        src/Parser/Parser.cpp
        src/Parser/Parser.h
        src/registers/Registers.cpp
        src/registers/Registers.h
        src/Statement/Statement.h
        src/Instruction/Instruction.cpp
        src/Instruction/Instruction.h
        src/Label/Label.cpp
        src/Label/Label.h
        src/Operands/Operands.h)

target_include_directories(forgenasm PRIVATE
        ${PROJECT_SOURCE_DIR}/src
)