```
ASM source
↓
Lexer
↓
Parser
↓
Instruction representation
↓
Symbol resolution
↓
Encoding
↓
Machine-code bytes
↓
ELF / Mach-O / raw binary
```

```
                 Assembly
                    │
                    ▼
                  Lexer
                    │
                    ▼
                 Parser
                    │
                    ▼
              Instructions
                    │
                    ▼
              Symbol Pass
                    │
                    ▼
               Encoder
                    │
                    ▼
            Machine Code
                    │
              ┌─────┴─────┐
              ▼           ▼
            ELF         Mach-O
              │           │
              └─────┬─────┘
                    ▼
                 Linker
                    │
                    ▼
               Executable
```

arm64

statement = instruction | label