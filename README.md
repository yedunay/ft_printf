# ft_printf - Custom Printf Function

## Overview

This repository contains the implementation of `ft_printf`, a custom printf function, as part of the École 42 curriculum. The goal of this project is to recreate the functionality of the standard C library's printf function while adhering to certain requirements and constraints.

## Features

- Supports the following format specifiers: 'c', 's', 'p', 'd', 'i', 'u', 'x', and 'X'.
- Accepts any number of arguments.
- Mimics the behavior of the standard printf function.
- Does not implement buffer management like the real printf.
- Utilizes the following external functions: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, and `va_end`.
- Library creation using the `ar` command is required.

## Project Structure

- **libftprintf.a**: The library file containing the implementation of `ft_printf`.
- **/src**: Directory containing the source code files.
- **/includes**: Directory containing header files.
- **Makefile**: Contains rules for compiling the project, creating the library, cleaning, and recompiling.

## Usage

1. Clone the repository:

    ```bash
    git clone <repository_url>
    ```

2. Navigate to the project directory:

    ```bash
    cd ft_printf
    ```

3. Compile the library:

    ```bash
    make
    ```

4. Use the library in your project:

    ```c
    #include "libftprintf.h"

    int main() {
        ft_printf("Hello, %s!\n", "world");
        return 0;
    }
    ```

5. Compile your project with the library:

    ```bash
    gcc -o my_program my_program.c libftprintf.a
    ```

6. Run the executable:

    ```bash
    ./my_program
    ```

## Testing

To ensure the correctness of `ft_printf`, it is recommended to compare its output with the standard printf function. Various test cases covering different format specifiers and edge cases should be considered.

## Contributing

Feel free to contribute to the project by submitting issues, suggesting improvements, or proposing new features. Pull requests are welcome!
