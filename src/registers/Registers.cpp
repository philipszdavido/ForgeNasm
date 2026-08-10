//
// Created by Chidume Nnamdi on 09/08/2026.
//

#include "Registers.h"

#define ARM64_REGISTERS \
    {"x0", "x0"},   \
    {"x1", "x1"},   \
    {"x2", "x2"},   \
    {"x3", "x3"},   \
    {"x4", "x4"},   \
    {"x5", "x5"},   \
    {"x6", "x6"},   \
    {"x7", "x7"},   \
    {"x8", "x8"},   \
    {"x9", "x9"},   \
    {"x10", "x10"}, \
    {"x11", "x11"}, \
    {"x12", "x12"}, \
    {"x13", "x13"}, \
    {"x14", "x14"}, \
    {"x15", "x15"}, \
    {"x16", "x16"}, \
    {"x17", "x17"}, \
    {"x18", "x18"}, \
    {"x19", "x19"}, \
    {"x20", "x20"}, \
    {"x21", "x21"}, \
    {"x22", "x22"}, \
    {"x23", "x23"}, \
    {"x24", "x24"}, \
    {"x25", "x25"}, \
    {"x26", "x26"}, \
    {"x27", "x27"}, \
    {"x28", "x28"}, \
    {"x29", "x29"}, \
    {"x30", "x30"}, \
    \
    {"w0", "x0"},   \
    {"w1", "x1"},   \
    {"w2", "x2"},   \
    {"w3", "x3"},   \
    {"w4", "x4"},   \
    {"w5", "x5"},   \
    {"w6", "x6"},   \
    {"w7", "x7"},   \
    {"w8", "x8"},   \
    {"w9", "x9"},   \
    {"w10", "x10"}, \
    {"w11", "x11"}, \
    {"w12", "x12"}, \
    {"w13", "x13"}, \
    {"w14", "x14"}, \
    {"w15", "x15"}, \
    {"w16", "x16"}, \
    {"w17", "x17"}, \
    {"w18", "x18"}, \
    {"w19", "x19"}, \
    {"w20", "x20"}, \
    {"w21", "x21"}, \
    {"w22", "x22"}, \
    {"w23", "x23"}, \
    {"w24", "x24"}, \
    {"w25", "x25"}, \
    {"w26", "x26"}, \
    {"w27", "x27"}, \
    {"w28", "x28"}, \
    {"w29", "x29"}, \
    {"w30", "x30"}, \
    \
    {"sp",  "sp"},  \
    {"xzr", "xzr"}, \
    {"wzr", "xzr"}, \
    {"fp",  "x29"}, \
    {"lr",  "x30"}, \
    \
    {"q0",  "q0"},  \
    {"q1",  "q1"},  \
    {"q2",  "q2"},  \
    {"q3",  "q3"},  \
    {"q4",  "q4"},  \
    {"q5",  "q5"},  \
    {"q6",  "q6"},  \
    {"q7",  "q7"},  \
    {"q8",  "q8"},  \
    {"q9",  "q9"},  \
    {"q10", "q10"}, \
    {"q11", "q11"}, \
    {"q12", "q12"}, \
    {"q13", "q13"}, \
    {"q14", "q14"}, \
    {"q15", "q15"}, \
    {"q16", "q16"}, \
    {"q17", "q17"}, \
    {"q18", "q18"}, \
    {"q19", "q19"}, \
    {"q20", "q20"}, \
    {"q21", "q21"}, \
    {"q22", "q22"}, \
    {"q23", "q23"}, \
    {"q24", "q24"}, \
    {"q25", "q25"}, \
    {"q26", "q26"}, \
    {"q27", "q27"}, \
    {"q28", "q28"}, \
    {"q29", "q29"}, \
    {"q30", "q30"}, \
    {"q31", "q31"}, \
    \
    {"d0",  "q0"},  \
    {"d1",  "q1"},  \
    {"d2",  "q2"},  \
    {"d3",  "q3"},  \
    {"d4",  "q4"},  \
    {"d5",  "q5"},  \
    {"d6",  "q6"},  \
    {"d7",  "q7"},  \
    {"d8",  "q8"},  \
    {"d9",  "q9"},  \
    {"d10", "q10"}, \
    {"d11", "q11"}, \
    {"d12", "q12"}, \
    {"d13", "q13"}, \
    {"d14", "q14"}, \
    {"d15", "q15"}, \
    {"d16", "q16"}, \
    {"d17", "q17"}, \
    {"d18", "q18"}, \
    {"d19", "q19"}, \
    {"d20", "q20"}, \
    {"d21", "q21"}, \
    {"d22", "q22"}, \
    {"d23", "q23"}, \
    {"d24", "q24"}, \
    {"d25", "q25"}, \
    {"d26", "q26"}, \
    {"d27", "q27"}, \
    {"d28", "q28"}, \
    {"d29", "q29"}, \
    {"d30", "q30"}, \
    {"d31", "q31"}, \
    \
    {"s0",  "q0"},  \
    {"s1",  "q1"},  \
    {"s2",  "q2"},  \
    {"s3",  "q3"},  \
    {"s4",  "q4"},  \
    {"s5",  "q5"},  \
    {"s6",  "q6"},  \
    {"s7",  "q7"},  \
    {"s8",  "q8"},  \
    {"s9",  "q9"},  \
    {"s10", "q10"}, \
    {"s11", "q11"}, \
    {"s12", "q12"}, \
    {"s13", "q13"}, \
    {"s14", "q14"}, \
    {"s15", "q15"}, \
    {"s16", "q16"}, \
    {"s17", "q17"}, \
    {"s18", "q18"}, \
    {"s19", "q19"}, \
    {"s20", "q20"}, \
    {"s21", "q21"}, \
    {"s22", "q22"}, \
    {"s23", "q23"}, \
    {"s24", "q24"}, \
    {"s25", "q25"}, \
    {"s26", "q26"}, \
    {"s27", "q27"}, \
    {"s28", "q28"}, \
    {"s29", "q29"}, \
    {"s30", "q30"}, \
    {"s31", "q31"}, \
    \
    {"h0",  "q0"},  \
    {"h1",  "q1"},  \
    {"h2",  "q2"},  \
    {"h3",  "q3"},  \
    {"h4",  "q4"},  \
    {"h5",  "q5"},  \
    {"h6",  "q6"},  \
    {"h7",  "q7"},  \
    {"h8",  "q8"},  \
    {"h9",  "q9"},  \
    {"h10", "q10"}, \
    {"h11", "q11"}, \
    {"h12", "q12"}, \
    {"h13", "q13"}, \
    {"h14", "q14"}, \
    {"h15", "q15"}, \
    {"h16", "q16"}, \
    {"h17", "q17"}, \
    {"h18", "q18"}, \
    {"h19", "q19"}, \
    {"h20", "q20"}, \
    {"h21", "q21"}, \
    {"h22", "q22"}, \
    {"h23", "q23"}, \
    {"h24", "q24"}, \
    {"h25", "q25"}, \
    {"h26", "q26"}, \
    {"h27", "q27"}, \
    {"h28", "q28"}, \
    {"h29", "q29"}, \
    {"h30", "q30"}, \
    {"h31", "q31"}, \
    \
    {"b0",  "q0"},  \
    {"b1",  "q1"},  \
    {"b2",  "q2"},  \
    {"b3",  "q3"},  \
    {"b4",  "q4"},  \
    {"b5",  "q5"},  \
    {"b6",  "q6"},  \
    {"b7",  "q7"},  \
    {"b8",  "q8"},  \
    {"b9",  "q9"},  \
    {"b10", "q10"}, \
    {"b11", "q11"}, \
    {"b12", "q12"}, \
    {"b13", "q13"}, \
    {"b14", "q14"}, \
    {"b15", "q15"}, \
    {"b16", "q16"}, \
    {"b17", "q17"}, \
    {"b18", "q18"}, \
    {"b19", "q19"}, \
    {"b20", "q20"}, \
    {"b21", "q21"}, \
    {"b22", "q22"}, \
    {"b23", "q23"}, \
    {"b24", "q24"}, \
    {"b25", "q25"}, \
    {"b26", "q26"}, \
    {"b27", "q27"}, \
    {"b28", "q28"}, \
    {"b29", "q29"}, \
    {"b30", "q30"}, \
    {"b31", "q31"}

unordered_map<string, Register> registers = {

    {"x0",  {.cls = RegisterClass::GPR, .number = 0,  .width = RegisterWidth::W64}},
    {"x1",  {RegisterClass::GPR, 1,  RegisterWidth::W64}},
    {"x2",  {RegisterClass::GPR, 2,  RegisterWidth::W64}},
    {"x3",  {RegisterClass::GPR, 3,  RegisterWidth::W64}},
    {"x4",  {RegisterClass::GPR, 4,  RegisterWidth::W64}},
    {"x5",  {RegisterClass::GPR, 5,  RegisterWidth::W64}},
    {"x6",  {RegisterClass::GPR, 6,  RegisterWidth::W64}},
    {"x7",  {RegisterClass::GPR, 7,  RegisterWidth::W64}},
    {"x8",  {RegisterClass::GPR, 8,  RegisterWidth::W64}},
    {"x9",  {RegisterClass::GPR, 9,  RegisterWidth::W64}},
    {"x10", {RegisterClass::GPR, 10, RegisterWidth::W64}},
    {"x11", {RegisterClass::GPR, 11, RegisterWidth::W64}},
    {"x12", {RegisterClass::GPR, 12, RegisterWidth::W64}},
    {"x13", {RegisterClass::GPR, 13, RegisterWidth::W64}},
    {"x14", {RegisterClass::GPR, 14, RegisterWidth::W64}},
    {"x15", {RegisterClass::GPR, 15, RegisterWidth::W64}},
    {"x16", {RegisterClass::GPR, 16, RegisterWidth::W64}},
    {"x17", {RegisterClass::GPR, 17, RegisterWidth::W64}},
    {"x18", {RegisterClass::GPR, 18, RegisterWidth::W64}},
    {"x19", {RegisterClass::GPR, 19, RegisterWidth::W64}},
    {"x20", {RegisterClass::GPR, 20, RegisterWidth::W64}},
    {"x21", {RegisterClass::GPR, 21, RegisterWidth::W64}},
    {"x22", {RegisterClass::GPR, 22, RegisterWidth::W64}},
    {"x23", {RegisterClass::GPR, 23, RegisterWidth::W64}},
    {"x24", {RegisterClass::GPR, 24, RegisterWidth::W64}},
    {"x25", {RegisterClass::GPR, 25, RegisterWidth::W64}},
    {"x26", {RegisterClass::GPR, 26, RegisterWidth::W64}},
    {"x27", {RegisterClass::GPR, 27, RegisterWidth::W64}},
    {"x28", {RegisterClass::GPR, 28, RegisterWidth::W64}},
    {"x29", {RegisterClass::GPR, 29, RegisterWidth::W64}},
    {"x30", {RegisterClass::GPR, 30, RegisterWidth::W64}},

    {"w0",  {RegisterClass::GPR, 0,  RegisterWidth::W32}},
    {"w1",  {RegisterClass::GPR, 1,  RegisterWidth::W32}},
    {"w2",  {RegisterClass::GPR, 2,  RegisterWidth::W32}},
    {"w3",  {RegisterClass::GPR, 3,  RegisterWidth::W32}},
    {"w4",  {RegisterClass::GPR, 4,  RegisterWidth::W32}},
    {"w5",  {RegisterClass::GPR, 5,  RegisterWidth::W32}},
    {"w6",  {RegisterClass::GPR, 6,  RegisterWidth::W32}},
    {"w7",  {RegisterClass::GPR, 7,  RegisterWidth::W32}},
    {"w8",  {RegisterClass::GPR, 8,  RegisterWidth::W32}},
    {"w9",  {RegisterClass::GPR, 9,  RegisterWidth::W32}},
    {"w10", {RegisterClass::GPR, 10, RegisterWidth::W32}},
    {"w11", {RegisterClass::GPR, 11, RegisterWidth::W32}},
    {"w12", {RegisterClass::GPR, 12, RegisterWidth::W32}},
    {"w13", {RegisterClass::GPR, 13, RegisterWidth::W32}},
    {"w14", {RegisterClass::GPR, 14, RegisterWidth::W32}},
    {"w15", {RegisterClass::GPR, 15, RegisterWidth::W32}},
    {"w16", {RegisterClass::GPR, 16, RegisterWidth::W32}},
    {"w17", {RegisterClass::GPR, 17, RegisterWidth::W32}},
    {"w18", {RegisterClass::GPR, 18, RegisterWidth::W32}},
    {"w19", {RegisterClass::GPR, 19, RegisterWidth::W32}},
    {"w20", {RegisterClass::GPR, 20, RegisterWidth::W32}},
    {"w21", {RegisterClass::GPR, 21, RegisterWidth::W32}},
    {"w22", {RegisterClass::GPR, 22, RegisterWidth::W32}},
    {"w23", {RegisterClass::GPR, 23, RegisterWidth::W32}},
    {"w24", {RegisterClass::GPR, 24, RegisterWidth::W32}},
    {"w25", {RegisterClass::GPR, 25, RegisterWidth::W32}},
    {"w26", {RegisterClass::GPR, 26, RegisterWidth::W32}},
    {"w27", {RegisterClass::GPR, 27, RegisterWidth::W32}},
    {"w28", {RegisterClass::GPR, 28, RegisterWidth::W32}},
    {"w29", {RegisterClass::GPR, 29, RegisterWidth::W32}},
    {"w30", {RegisterClass::GPR, 30, RegisterWidth::W32}},

    {"q0",  {RegisterClass::SIMD, 0,  RegisterWidth::W128}},
    {"q1",  {RegisterClass::SIMD, 1,  RegisterWidth::W128}},
    {"q2",  {RegisterClass::SIMD, 2,  RegisterWidth::W128}},
    {"q3",  {RegisterClass::SIMD, 3,  RegisterWidth::W128}},
    {"q4",  {RegisterClass::SIMD, 4,  RegisterWidth::W128}},
    {"q5",  {RegisterClass::SIMD, 5,  RegisterWidth::W128}},
    {"q6",  {RegisterClass::SIMD, 6,  RegisterWidth::W128}},
    {"q7",  {RegisterClass::SIMD, 7,  RegisterWidth::W128}},
    {"q8",  {RegisterClass::SIMD, 8,  RegisterWidth::W128}},
    {"q9",  {RegisterClass::SIMD, 9,  RegisterWidth::W128}},
    {"q10", {RegisterClass::SIMD, 10, RegisterWidth::W128}},
    {"q11", {RegisterClass::SIMD, 11, RegisterWidth::W128}},
    {"q12", {RegisterClass::SIMD, 12, RegisterWidth::W128}},
    {"q13", {RegisterClass::SIMD, 13, RegisterWidth::W128}},
    {"q14", {RegisterClass::SIMD, 14, RegisterWidth::W128}},
    {"q15", {RegisterClass::SIMD, 15, RegisterWidth::W128}},
    {"q16", {RegisterClass::SIMD, 16, RegisterWidth::W128}},
    {"q17", {RegisterClass::SIMD, 17, RegisterWidth::W128}},
    {"q18", {RegisterClass::SIMD, 18, RegisterWidth::W128}},
    {"q19", {RegisterClass::SIMD, 19, RegisterWidth::W128}},
    {"q20", {RegisterClass::SIMD, 20, RegisterWidth::W128}},
    {"q21", {RegisterClass::SIMD, 21, RegisterWidth::W128}},
    {"q22", {RegisterClass::SIMD, 22, RegisterWidth::W128}},
    {"q23", {RegisterClass::SIMD, 23, RegisterWidth::W128}},
    {"q24", {RegisterClass::SIMD, 24, RegisterWidth::W128}},
    {"q25", {RegisterClass::SIMD, 25, RegisterWidth::W128}},
    {"q26", {RegisterClass::SIMD, 26, RegisterWidth::W128}},
    {"q27", {RegisterClass::SIMD, 27, RegisterWidth::W128}},
    {"q28", {RegisterClass::SIMD, 28, RegisterWidth::W128}},
    {"q29", {RegisterClass::SIMD, 29, RegisterWidth::W128}},
    {"q30", {RegisterClass::SIMD, 30, RegisterWidth::W128}},
    {"q31", {RegisterClass::SIMD, 31, RegisterWidth::W128}},

    {"d0",  {RegisterClass::SIMD, 0,  RegisterWidth::W64}},
    {"d1",  {RegisterClass::SIMD, 1,  RegisterWidth::W64}},
    {"d2",  {RegisterClass::SIMD, 2,  RegisterWidth::W64}},
    {"d3",  {RegisterClass::SIMD, 3,  RegisterWidth::W64}},
    {"d4",  {RegisterClass::SIMD, 4,  RegisterWidth::W64}},
    {"d5",  {RegisterClass::SIMD, 5,  RegisterWidth::W64}},
    {"d6",  {RegisterClass::SIMD, 6,  RegisterWidth::W64}},
    {"d7",  {RegisterClass::SIMD, 7,  RegisterWidth::W64}},
    {"d8",  {RegisterClass::SIMD, 8,  RegisterWidth::W64}},
    {"d9",  {RegisterClass::SIMD, 9,  RegisterWidth::W64}},
    {"d10", {RegisterClass::SIMD, 10, RegisterWidth::W64}},
    {"d11", {RegisterClass::SIMD, 11, RegisterWidth::W64}},
    {"d12", {RegisterClass::SIMD, 12, RegisterWidth::W64}},
    {"d13", {RegisterClass::SIMD, 13, RegisterWidth::W64}},
    {"d14", {RegisterClass::SIMD, 14, RegisterWidth::W64}},
    {"d15", {RegisterClass::SIMD, 15, RegisterWidth::W64}},
    {"d16", {RegisterClass::SIMD, 16, RegisterWidth::W64}},
    {"d17", {RegisterClass::SIMD, 17, RegisterWidth::W64}},
    {"d18", {RegisterClass::SIMD, 18, RegisterWidth::W64}},
    {"d19", {RegisterClass::SIMD, 19, RegisterWidth::W64}},
    {"d20", {RegisterClass::SIMD, 20, RegisterWidth::W64}},
    {"d21", {RegisterClass::SIMD, 21, RegisterWidth::W64}},
    {"d22", {RegisterClass::SIMD, 22, RegisterWidth::W64}},
    {"d23", {RegisterClass::SIMD, 23, RegisterWidth::W64}},
    {"d24", {RegisterClass::SIMD, 24, RegisterWidth::W64}},
    {"d25", {RegisterClass::SIMD, 25, RegisterWidth::W64}},
    {"d26", {RegisterClass::SIMD, 26, RegisterWidth::W64}},
    {"d27", {RegisterClass::SIMD, 27, RegisterWidth::W64}},
    {"d28", {RegisterClass::SIMD, 28, RegisterWidth::W64}},
    {"d29", {RegisterClass::SIMD, 29, RegisterWidth::W64}},
    {"d30", {RegisterClass::SIMD, 30, RegisterWidth::W64}},
    {"d31", {RegisterClass::SIMD, 31, RegisterWidth::W64}},

    {"s0",  {RegisterClass::SIMD, 0,  RegisterWidth::W32}},
    {"s1",  {RegisterClass::SIMD, 1,  RegisterWidth::W32}},
    {"s2",  {RegisterClass::SIMD, 2,  RegisterWidth::W32}},
    {"s3",  {RegisterClass::SIMD, 3,  RegisterWidth::W32}},
    {"s4",  {RegisterClass::SIMD, 4,  RegisterWidth::W32}},
    {"s5",  {RegisterClass::SIMD, 5,  RegisterWidth::W32}},
    {"s6",  {RegisterClass::SIMD, 6,  RegisterWidth::W32}},
    {"s7",  {RegisterClass::SIMD, 7,  RegisterWidth::W32}},
    {"s8",  {RegisterClass::SIMD, 8,  RegisterWidth::W32}},
    {"s9",  {RegisterClass::SIMD, 9,  RegisterWidth::W32}},
    {"s10", {RegisterClass::SIMD, 10, RegisterWidth::W32}},
    {"s11", {RegisterClass::SIMD, 11, RegisterWidth::W32}},
    {"s12", {RegisterClass::SIMD, 12, RegisterWidth::W32}},
    {"s13", {RegisterClass::SIMD, 13, RegisterWidth::W32}},
    {"s14", {RegisterClass::SIMD, 14, RegisterWidth::W32}},
    {"s15", {RegisterClass::SIMD, 15, RegisterWidth::W32}},
    {"s16", {RegisterClass::SIMD, 16, RegisterWidth::W32}},
    {"s17", {RegisterClass::SIMD, 17, RegisterWidth::W32}},
    {"s18", {RegisterClass::SIMD, 18, RegisterWidth::W32}},
    {"s19", {RegisterClass::SIMD, 19, RegisterWidth::W32}},
    {"s20", {RegisterClass::SIMD, 20, RegisterWidth::W32}},
    {"s21", {RegisterClass::SIMD, 21, RegisterWidth::W32}},
    {"s22", {RegisterClass::SIMD, 22, RegisterWidth::W32}},
    {"s23", {RegisterClass::SIMD, 23, RegisterWidth::W32}},
    {"s24", {RegisterClass::SIMD, 24, RegisterWidth::W32}},
    {"s25", {RegisterClass::SIMD, 25, RegisterWidth::W32}},
    {"s26", {RegisterClass::SIMD, 26, RegisterWidth::W32}},
    {"s27", {RegisterClass::SIMD, 27, RegisterWidth::W32}},
    {"s28", {RegisterClass::SIMD, 28, RegisterWidth::W32}},
    {"s29", {RegisterClass::SIMD, 29, RegisterWidth::W32}},
    {"s30", {RegisterClass::SIMD, 30, RegisterWidth::W32}},
    {"s31", {RegisterClass::SIMD, 31, RegisterWidth::W32}},

    {"h0",  {RegisterClass::SIMD, 0,  RegisterWidth::W16}},
    {"h1",  {RegisterClass::SIMD, 1,  RegisterWidth::W16}},
    {"h2",  {RegisterClass::SIMD, 2,  RegisterWidth::W16}},
    {"h3",  {RegisterClass::SIMD, 3,  RegisterWidth::W16}},
    {"h4",  {RegisterClass::SIMD, 4,  RegisterWidth::W16}},
    {"h5",  {RegisterClass::SIMD, 5,  RegisterWidth::W16}},
    {"h6",  {RegisterClass::SIMD, 6,  RegisterWidth::W16}},
    {"h7",  {RegisterClass::SIMD, 7,  RegisterWidth::W16}},
    {"h8",  {RegisterClass::SIMD, 8,  RegisterWidth::W16}},
    {"h9",  {RegisterClass::SIMD, 9,  RegisterWidth::W16}},
    {"h10", {RegisterClass::SIMD, 10, RegisterWidth::W16}},
    {"h11", {RegisterClass::SIMD, 11, RegisterWidth::W16}},
    {"h12", {RegisterClass::SIMD, 12, RegisterWidth::W16}},
    {"h13", {RegisterClass::SIMD, 13, RegisterWidth::W16}},
    {"h14", {RegisterClass::SIMD, 14, RegisterWidth::W16}},
    {"h15", {RegisterClass::SIMD, 15, RegisterWidth::W16}},
    {"h16", {RegisterClass::SIMD, 16, RegisterWidth::W16}},
    {"h17", {RegisterClass::SIMD, 17, RegisterWidth::W16}},
    {"h18", {RegisterClass::SIMD, 18, RegisterWidth::W16}},
    {"h19", {RegisterClass::SIMD, 19, RegisterWidth::W16}},
    {"h20", {RegisterClass::SIMD, 20, RegisterWidth::W16}},
    {"h21", {RegisterClass::SIMD, 21, RegisterWidth::W16}},
    {"h22", {RegisterClass::SIMD, 22, RegisterWidth::W16}},
    {"h23", {RegisterClass::SIMD, 23, RegisterWidth::W16}},
    {"h24", {RegisterClass::SIMD, 24, RegisterWidth::W16}},
    {"h25", {RegisterClass::SIMD, 25, RegisterWidth::W16}},
    {"h26", {RegisterClass::SIMD, 26, RegisterWidth::W16}},
    {"h27", {RegisterClass::SIMD, 27, RegisterWidth::W16}},
    {"h28", {RegisterClass::SIMD, 28, RegisterWidth::W16}},
    {"h29", {RegisterClass::SIMD, 29, RegisterWidth::W16}},
    {"h30", {RegisterClass::SIMD, 30, RegisterWidth::W16}},
    {"h31", {RegisterClass::SIMD, 31, RegisterWidth::W16}},

    {"b0",  {RegisterClass::SIMD, 0,  RegisterWidth::W8}},
    {"b1",  {RegisterClass::SIMD, 1,  RegisterWidth::W8}},
    {"b2",  {RegisterClass::SIMD, 2,  RegisterWidth::W8}},
    {"b3",  {RegisterClass::SIMD, 3,  RegisterWidth::W8}},
    {"b4",  {RegisterClass::SIMD, 4,  RegisterWidth::W8}},
    {"b5",  {RegisterClass::SIMD, 5,  RegisterWidth::W8}},
    {"b6",  {RegisterClass::SIMD, 6,  RegisterWidth::W8}},
    {"b7",  {RegisterClass::SIMD, 7,  RegisterWidth::W8}},
    {"b8",  {RegisterClass::SIMD, 8,  RegisterWidth::W8}},
    {"b9",  {RegisterClass::SIMD, 9,  RegisterWidth::W8}},
    {"b10", {RegisterClass::SIMD, 10, RegisterWidth::W8}},
    {"b11", {RegisterClass::SIMD, 11, RegisterWidth::W8}},
    {"b12", {RegisterClass::SIMD, 12, RegisterWidth::W8}},
    {"b13", {RegisterClass::SIMD, 13, RegisterWidth::W8}},
    {"b14", {RegisterClass::SIMD, 14, RegisterWidth::W8}},
    {"b15", {RegisterClass::SIMD, 15, RegisterWidth::W8}},
    {"b16", {RegisterClass::SIMD, 16, RegisterWidth::W8}},
    {"b17", {RegisterClass::SIMD, 17, RegisterWidth::W8}},
    {"b18", {RegisterClass::SIMD, 18, RegisterWidth::W8}},
    {"b19", {RegisterClass::SIMD, 19, RegisterWidth::W8}},
    {"b20", {RegisterClass::SIMD, 20, RegisterWidth::W8}},
    {"b21", {RegisterClass::SIMD, 21, RegisterWidth::W8}},
    {"b22", {RegisterClass::SIMD, 22, RegisterWidth::W8}},
    {"b23", {RegisterClass::SIMD, 23, RegisterWidth::W8}},
    {"b24", {RegisterClass::SIMD, 24, RegisterWidth::W8}},
    {"b25", {RegisterClass::SIMD, 25, RegisterWidth::W8}},
    {"b26", {RegisterClass::SIMD, 26, RegisterWidth::W8}},
    {"b27", {RegisterClass::SIMD, 27, RegisterWidth::W8}},
    {"b28", {RegisterClass::SIMD, 28, RegisterWidth::W8}},
    {"b29", {RegisterClass::SIMD, 29, RegisterWidth::W8}},
    {"b30", {RegisterClass::SIMD, 30, RegisterWidth::W8}},
    {"b31", {RegisterClass::SIMD, 31, RegisterWidth::W8}},

    {"sp",  {RegisterClass::SP,   31, RegisterWidth::W64}},
    {"xzr", {RegisterClass::ZERO, 31, RegisterWidth::W64}},
    {"wzr", {RegisterClass::ZERO, 31, RegisterWidth::W32}},
};

unordered_map<string, string> registers_map = {
    ARM64_REGISTERS
};