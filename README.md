# Modern C++ & Data Structures Master Repository

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B17%20%2F%20C%2B%2B20-00599C?style=for-the-badge&logo=c%2B%2B" alt="C++" />
  <img src="https://img.shields.io/badge/Focus-Algorithms%20%26%20Problem%20Solving-red?style=for-the-badge" alt="DSA" />
  <img src="https://img.shields.io/badge/Platform-Linux%20%2F%20GCC-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
  <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="License" />
</p>

A curated collection of **C++ algorithms, data structures, pointer manipulations, and core computer science problem-solving patterns**.

---

## Repository Curriculum & Structure

```text
C-plus-plus/
├── BasicQuestion/          # Foundational logic, math algorithms, and control flow
├── Pointers/               # Low-level memory management, pointer arithmetic & references
├── Recursion/              # Recursive problem solving, backtracking & call stack execution
├── String/                 # Advanced string manipulation, pattern searching & parsing
└── Pattern/                # Logic grid building and nested loop algorithmic patterns
```

---

## Topic Breakdown

### 1. Pointer Mechanics & Memory Operations (`Pointers/`)
- Direct memory addressing (`&`) and dereferencing (`*`)
- Dynamic memory allocation (`new` / `delete`)
- Pointer arithmetic and contiguous array traversal
- Double pointers (`**`) and reference parameters

### 2. Recursion & Divide-and-Conquer (`Recursion/`)
- Base case termination vs. recurrence relations
- Stack frame visualization and recursive tree branching
- Subproblem decomposition and state tracking

### 3. String Processing (`String/`)
- In-place string reversal, palindrome validation, and anagram detection
- Substring extraction, word tokenization, and pattern matching
- Character frequency mapping and lexicographical comparisons

### 4. Foundational Computational Problems (`BasicQuestion/`)
- Prime number sieves, GCD (Euclidean algorithm), and Fibonacci sequences
- Bitwise operators (shifts, masks, XOR manipulations)
- Array manipulation, prefix sums, and element search

---

## Compilation & Execution

All solutions are written in modern, standard C++ and can be compiled using `g++` or `clang++`:

### Compile a Single Source File
```bash
g++ -O2 -std=c++17 -Wall String/1.c++ -o solution
./solution
```

### Compile with Debugging Symbols
```bash
g++ -g -std=c++17 -fsanitize=address Pointers/1.c++ -o debug_solution
./debug_solution
```

---

## Author

**Shanawaz Alam**  
- GitHub: [@ShanawazAlam007](https://github.com/ShanawazAlam007)  
- Focus: Systems Programming, High-Performance C++, and Cybersecurity