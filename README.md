# Dynamic Memory Management

This project focuses on managing dynamic memory allocation in C using malloc, realloc, and free which is used to processes arrays of integers in various ways along with printing contents and displaying summary statistics. In the end all allocated memory is released.

## Directory Structure

```
Dynamic_Memory_Management/
├── src/
│   ├── main.c
│   ├── dynamic_array.c
│   └── dynamic_array.h
│
├── Makefile
└── README.md
```

## How to Compile and Run

### Prerequisites
- A C compiler such as gcc
- `main` if using Makefile

### Compilation
Navigate to `/Dynamic_Memory_Management/src` and compile program:
  ```
  make
  ```
This will generate an executable named `main`.

### Running the Program
Execute the Program with:
  ```
  ./main
  ```

### Cleaning up
To remove compiled files, use:
  ```
  make clean
  ```
