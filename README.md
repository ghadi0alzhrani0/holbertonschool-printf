# C - printf

## Description

This project is a custom `printf` function written in C.

supported conversion specifiers:
- %c : character
- %s : string
- %% : percent sign
- %d : integer
- %i : integer

## Installation

1. Clone the repository:
   git clone  https://github.com/ghadi0alzhrani0/holbertonschool-printf.git

2. Move into the project directory:
   cd holbertonschool-printf

3. Compile the project using:
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Requirements
- Ubuntu 20.04 LTS
- GCC compiler
- Standard C libraries (stdarg.h, unistd.h)
- Betty coding style

Allowed Function:
- write
- malloc
- free
- va_start
- va_end
- va_copy
- va_arg

## Examples
_printf("Hello %s\n", "World");
_printf("Char: %c\n", 'A');
_printf("Number: %d\n", 98);
_printf("Percent: %%\n");

## Testing
You can test the function by creating a main.c file and compiling the project using gcc.
Don not include main.c in repository.

## Files

- `main.h`
- `_printf.c`
- `_putchar.c`
- `print_basic.c`
- `print_numbers.c`
- `man_3_printf`

## Authors

- Ghadi Alzhrani 
- Khalid Aloraini 
