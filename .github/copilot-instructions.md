# Copilot Instructions for C/C++ Project

## Project Overview
This is a minimal C/C++ program consisting of a single source file `test.c` with a basic main function. The project appears to be a simple test or starter template for C/C++ development on Windows using MSYS2.

## Architecture
- **Single-file structure**: All code resides in `test.c`
- **Entry point**: Standard `main` function
- **Dependencies**: Only standard C library (`<stdio.h>`)

## Build and Run
- **VS Code Task**: Use the "build (gcc msys2)" task (Ctrl+Shift+B) which compiles with MSYS2 GCC
- **Manual Compile**: `C:\msys64\ucrt64\bin\gcc.exe -g test.c -o test.exe`
- **Run**: Execute `./test.exe` in terminal
- **Note**: Code is now syntactically correct with `int main(void) { return 0; }`

## Code Patterns
- Use standard C/C++ syntax and libraries
- Include headers at top: `#include <stdio.h>`
- Main function returns int: `int main(void) { ... return 0; }`

## Development Workflow
- Edit `test.c` directly
- Build using VS Code task or manual GCC command
- Run executable in terminal
- No automated tests or build scripts present

## Common Fixes
- Fix function declarations: Ensure parentheses after function names
- Add missing semicolons and braces</content>
<parameter name="filePath">c:\Users\Da Hyun\Desktop\ready\.github\copilot-instructions.md