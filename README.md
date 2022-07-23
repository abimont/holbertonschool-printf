# C - printf
Project by [Jhonatan Ramos](https://github.com/TATTANRAM0X) and [Abigail Montes](https://github.com/abimont)

This repository has as purpose to develop a clone of C function ```printf``` called ```_printf```.

## Table of contents

1. [General info](#general-info)
2. [Requirements](#requirements)
3. [Autorized functions and macros](#autorized-functions-and-macros)
4. [Files and description](#files-and-description)
5. [Prototypes and description](#prtotypes-and-descriptions)

## General info

```_printf``` function takes one argument:
a string of characters to be printed. Then uses conversion specifiers to determine data type to be printed.

This function is part of the _holbertonschool-printf_ project at [Holberton School](https://www.holbertonschool.com/).

## Requirements
- Allowed editors: ```vi```, ```vim```, ```emacs```.
- All the files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```.
- The code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- No more than 5 functions per file.
- A ```README.md``` file, at the root of the folder of the project is mandatory.
- All your header files should be include guarded.

## Autorized functions and macros
- ```write``` (```man 2 write```)
- ```malloc``` (```man 3 malloc```)
- ```free``` (```man 3 free```)
- ```va_start``` (```man 3 va_start```)
- ```va_end``` (```man 3 va_end```)
- ```va_copy``` (```man 3 va_copy```)
- ```va_arg``` (```man 3 va_arg```)

## Files and description

| Files | Description |
| ------------- | ------------- |
| main.h | Header file containing all libraries, structs and prototypes needed. |
| _printf.c | Contains the fucntion _printf, which produces output according to a format passed as an argument |
| def_type.c | Contains the function to define the type of elements to print |
| type_functions.c | Contains the functions that prints the string acording to their format |
| _putchar.c | Contains the function to print character by character to stdout the arguments |
