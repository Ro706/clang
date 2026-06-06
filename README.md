# Clang - C Programming Learning Repository

This repository is designed to help you learn and practice **C programming**, from basic concepts to advanced topics. Each topic is organized into its own directory with example programs and explanations.

## 📚 Repository Structure

```text
clang/
├── array/           # Array operations and examples
├── basic/           # Basic C programs (Hello World, arithmetic operations)
├── function/        # Function definitions and usage
├── if-else/         # Conditional statements
├── LICENSE          # License file
├── loop/            # Loops (for, while, do-while)
├── pointer/         # Pointer concepts and examples
├── README.md        # Repository documentation
├── struct/          # Structure definitions and usage
└── union/           # Union definitions and usage
```

---

## 🚀 Quick Start

### Basic Programs

Navigate to the `basic/` directory to explore fundamental C programs:

* `hello-world.c` — Your first C program
* `div-of-two-number.c` — Division operations
* `mult-of-two-number.c` — Multiplication operations
* `sub-of-two-number.c` — Subtraction operations
* `sum-of-two-number.c` — Addition operations
* `input-statement.c` — User input handling
* `input-str.c` — String input
* `student-marks.c` — Practical application example

---

## 📖 Introduction to C

C is a powerful, general-purpose programming language developed by **Dennis Ritchie** at Bell Laboratories in **1972**. It is widely known for its efficiency, portability, and low-level memory access capabilities.

### Key Characteristics

* Middle-level programming language
* Procedural programming language
* Case-sensitive language
* Fast and efficient execution
* Portable across platforms
* Rich set of operators and libraries

---

## ⚙️ Compilation Process

A compiler converts human-readable C source code into machine-executable code.

### Compile a Program

```bash
gcc filename.c -o program_name
```

### Run the Program

```bash
./program_name
```

### Remove Executable

```bash
rm program_name
```

---

## 🏗️ Basic Structure of a C Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
```

### Components

| Component        | Description                                     |
| ---------------- | ----------------------------------------------- |
| Header Files     | `#include` statements provide library functions |
| Main Function    | Entry point of every C program                  |
| Statements       | Instructions executed by the program            |
| Return Statement | Indicates successful execution                  |

---

## 🔑 C Programming Elements

### Tokens

Tokens are the smallest meaningful units in a C program.

C supports six types of tokens:

1. Keywords
2. Identifiers
3. Constants
4. Strings
5. Operators
6. Special Symbols

### Keywords Classification

#### Data Types

```c
void, char, short, int, signed, unsigned,
float, double, long
```

#### Flow Control

```c
if, else, do, while, for, switch,
case, default, break, continue, goto
```

#### Storage Classes

```c
auto, static, extern, register
```

#### User-Defined Types

```c
struct, union, enum, typedef
```

#### Other Keywords

```c
const, volatile, return, sizeof
```

---

## 📊 Data Types and Constants

### Integer Constants

| Type        | Examples     |
| ----------- | ------------ |
| Decimal     | 10, -2, 0, 8 |
| Octal       | 012, 0777    |
| Hexadecimal | 0x1A, 0xFF   |

### Floating Point Constants

```c
3.14
82.081
1.23e-4
4.56E+3
```

### Character Constants

```c
'a'
'b'
'7'
```

### String Constants

```c
"hello"
"Ro706"
```

### Variable Declaration Examples

```c
int age = 25;
float height = 5.6;
char grade = 'A';
```

---

## 🧮 Operators

### Arithmetic Operators

| Operator | Description    |
| -------- | -------------- |
| +        | Addition       |
| -        | Subtraction    |
| *        | Multiplication |
| /        | Division       |
| %        | Modulus        |

### Relational Operators

| Operator | Description              |
| -------- | ------------------------ |
| ==       | Equal to                 |
| !=       | Not equal to             |
| >        | Greater than             |
| <        | Less than                |
| >=       | Greater than or equal to |
| <=       | Less than or equal to    |

### Logical Operators

| Operator | Description |
| -------- | ----------- |
| &&       | Logical AND |
| ||       | Logical OR  |
| !        | Logical NOT |

---

## 🎯 Control Flow

### Conditional Statements

```c
if (condition) {
    // Code
}
else if (another_condition) {
    // Code
}
else {
    // Code
}
```

### Loops

* **For Loop** – Used when the number of iterations is known.
* **While Loop** – Used when a condition must be checked before execution.
* **Do-While Loop** – Executes at least once before checking the condition.

---

## 🔗 Pointers

Pointers store memory addresses of variables.

```c
int x = 10;
int *ptr = &x;

printf("%d", *ptr);
```

---

## 🏗️ Data Structures

### Structures

Structures allow grouping related data of different types.

```c
struct Student {
    int roll;
    char name[50];
    float marks;
};
```

### Unions

Unions allow different data types to share the same memory location.

```c
union Data {
    int i;
    float f;
    char str[20];
};
```

---

## 📁 How to Use This Repository

1. Start with the `basic/` directory.
2. Progress through the folders step by step.
3. Compile and run each program.
4. Modify the code to understand concepts better.
5. Practice by writing your own programs.

---

## 📚 Learning Path

* Basic Programs
* Variables and Data Types
* Operators
* Control Flow
* Functions
* Arrays
* Strings
* Pointers
* Structures and Unions
* File Handling

---

## 🤝 Contributing

Contributions are welcome!

You can:

* Add new programs
* Improve existing examples
* Fix bugs or typos
* Share your learning journey
* Suggest new topics

---

## 📄 License

This project is licensed under the **MIT License**. See the `LICENSE` file for details.

---

## 🎓 Happy Coding!

Programming is a skill that improves with practice. Start simple, experiment often, and don't be afraid to make mistakes—every error is a learning opportunity.

**— Ro706**
