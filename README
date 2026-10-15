# Binary Converter

A small C++ command-line project for experimenting with number representation and converting between decimal and binary values.

I made this project **just for fun**. I wanted to explore how numbers can be represented in binary and practise implementing the conversion logic myself instead of treating it as a black box. I enjoyed building it, testing different inputs, and organizing the code into a small C++ class.

## Table of Contents

- [What It Does](#what-it-does)
- [Build and Run](#build-and-run)
- [Usage](#usage)
- [How I Built It](#how-i-built-it)
- [Project Structure](#project-structure)
- [Current Limitations](#current-limitations)
- [What I Enjoyed Learning](#what-i-enjoyed-learning)
- [License](#license)

## What It Does

The program takes one command-line argument. The first character chooses the conversion mode, and the remaining characters contain the value to process.

| Prefix | Purpose |
| --- | --- |
| `n` | Convert a decimal value to a binary representation. |
| `b` | Process a binary value and convert it to a number. |

The code includes separate routines for integer and floating-point conversion, along with input validation. The exact behavior for negative values and fractional inputs depends on the conversion logic implemented in the source files.

## Build and Run

### Requirements

- A C++ compiler available through `c++`
- GNU Make
- Git, if you want to clone the repository

### Get the source code

```bash
git clone https://github.com/CodeAndCofe/btn-ntb.git
cd btn-ntb
```

### Build

```bash
make
```

This builds the `binary` executable, assuming compilation succeeds.

## Usage

The command format is:

```text
./binary [n|b]<value>
```

The program expects exactly one argument. It checks the first character and accepts `n` or `b` as the mode prefix.

### Decimal to binary

For example, convert decimal `13`:

```bash
./binary n13
```

Example output for the 32-bit integer representation:

```text
00000000 00000000 00000000 00001101
```

You can also pass a negative value:

```bash
./binary n-13
```

The exact output for negative and fractional values is determined by the conversion implementation.

### Binary to number

The intended input format is a `b` prefix followed by the binary digits. For example:

```bash
./binary b1101
```

The corresponding decimal value is `13`.

**Current status:** In the `main()` implementation shown in this repository, the `b` branch calls `convert_to_number()` but does not call `output_number()`. The converted value is assigned to `number_result`, but this entry point does not print it yet. See [Current Limitations](#current-limitations).

## How I Built It

I organized the conversion logic around a `numbers` class. The command-line entry point checks the arguments, creates a `numbers` object, and calls the method for the selected mode.

The main flow in `main()` is:

1. Check that the program received exactly one command-line argument.
2. Read the argument and check whether its first character is `n` or `b`.
3. Create a `numbers` object with the input string.
4. For `n`, call `execute()` and then `output_binary()`.
5. For `b`, call `convert_to_number()`.
6. Catch and print any thrown C-string error messages.

The `numbers` class stores the input and conversion state. In `Converter.hpp`, its members include:

- `data`: the input string.
- `binary_result`: a `std::vector<int>` used to store binary digits.
- `number_result`: an integer used to store the converted numeric result.
- `sign`: a flag used by the conversion logic to track the sign.

The class declares separate methods for running the conversion, printing binary output, converting binary back to a number, and handling integer and floating-point input. Keeping these responsibilities in a class made the project easier to organize than placing all the logic directly in `main()`.

## Project Structure

| File | Responsibility |
| --- | --- |
| `converter.cpp` | Entry point, command-line argument checks, and mode selection. |
| `numbers.cpp` | Decimal-to-binary conversion and binary output. |
| `conver_to_number.cpp` | Binary-to-number conversion logic. The filename is kept as it appears in the project. |
| `Converter.hpp` | Declaration of the `numbers` class and its data members and methods. |
| `Makefile` | Build rules and compilation commands. |

## Build Commands

```bash
make
```
Build the executable.

```bash
make clean
```
Remove generated object files.

```bash
make fclean
```
Remove generated object files and the executable.

```bash
make re
```
Perform a clean rebuild, if this target is defined in the Makefile.

## Current Limitations

- **Binary result is not printed by the current `b` command path.** `main()` calls `convert_to_number()` but does not call `output_number()` afterward.
- **Input and range behavior depends on the implementation.** Test invalid characters, empty values, leading signs, fractional values, and values outside the range of the destination type before relying on the program for general input.
- **The README describes the visible interface and declarations.** The details of integer and floating-point conversion depend on the corresponding method implementations in the source files.
- **No license has been specified** for this repository.

## What I Enjoyed Learning

This was a small side project, but it was a fun way to explore binary representation and practise C++ beyond coursework. I enjoyed thinking through how a value could be represented as bits, separating the conversion logic into methods, and experimenting with the command-line interface.

The project also gave me practice with C++ classes, `std::string`, `std::vector`, header files, and Makefiles. Most importantly, it reminded me that small projects built out of curiosity can be a useful way to learn and reinforce programming fundamentals.

## License

No license has been specified for this project.