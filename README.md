# Simple Password Checker for Binary Analysis

This is a simple password checker program written in C. It is designed for reverse engineering exercises, particularly using tools like **Binary Ninja** to analyze the program and attempt to break the password.

The program checks if the user-provided password matches a hardcoded correct password. If successful, access is granted; otherwise, an incorrect password message is displayed.

## Intended Use:
- **Reverse Engineering Practice:** Use Binary Ninja or similar disassembly tools to analyze the program and find the correct password by inspecting the code.
- **Security Testing:** Understand how hardcoded passwords can be insecure and susceptible to being discovered using reverse engineering techniques.

## Features:
- Basic password verification
- Hardcoded password to allow for static analysis
- Simple C implementation to be used for reverse engineering exercises

## Requirements:
- A C compiler (e.g., GCC)
- Binary Ninja or other disassembly tools to analyze the binary

## How to Use:
1. Clone or download the repository.
2. Compile the code with a C compiler (e.g., GCC).
3. Use **Binary Ninja** or your preferred disassembler to analyze the binary.
4. Look for the hardcoded password and attempt to understand how the program validates it.

### Example Output:
If the correct password is entered:
