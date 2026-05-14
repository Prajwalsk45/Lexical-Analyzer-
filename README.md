# Lexical-Analyzer-
Developed a Lexical Analyzer in C to scan and tokenize C source code by identifying keywords, identifiers, operators, symbols, numeric constants, string literals, and character constants. The project performs token classification similar to the first phase of a compiler and validates different numeric formats.


Project Overview
This project implements a Lexical Analyzer (Tokenizer) using the C programming language.

A lexical analyzer is the first phase of a compiler. It reads the source code and breaks it into smaller meaningful units called tokens.

The analyzer identifies different token types such as:

Keywords
Identifiers
Numbers
Operators
Delimiters
Strings
Comments
Whitespace and comments are ignored to produce a clean token stream for further compilation stages.

🎯 Features
✔ Detects C language keywords
✔ Detects identifiers (variable/function names)
✔ Detects integer numbers
✔ Detects operators (+ - * / = == != <= >= && || etc.)
✔ Detects delimiters (; , ( ) { } [ ])
✔ Detects string literals
✔ Detects single-line and multi-line comments
✔ Ignores unnecessary whitespace
✔ Produces a structured token stream output

🛠️ Tech Stack
Language: C
Platform: Linux (Ubuntu)
Compiler: GCC
Tools: VS Code

📂 Project Structure
Lexical-Analyzer-in-C
│
├── main.c        # Program entry point
├── main.h        # Function declarations
├── types.h       # Token type definitions and structures
├── code.c       # Input processing and token extraction
└── README.md     # Project documentation


⚙️ Compilation & Execution
Compile
gcc *.c -o lexer
Run
./lexer <input_file.c>
Example:
./lexer sample.c


📌 Example Output
The program prints tokens in a structured format including:

Token Type
Token Value
Example token stream:

KEYWORD      int
IDENTIFIER   main
DELIMITER    (
DELIMITER    )
DELIMITER    {
IDENTIFIER   a
OPERATOR     =
NUMBER       10
DELIMITER    ;


📚 Learning Outcomes
Through this project I gained experience with:

Compiler design basics
Tokenization techniques
Pattern matching in C
File parsing and text processing
Modular C programming
🚀 Future Enhancements
Support for floating point numbers
Support for preprocessor directives (#include, #define)
Save tokens to output file
Improve error handling and reporting



⭐ Support
If you found this project useful:

⭐ Star the repository on GitHub
📢 Share it with others interested in compiler design and C programming
