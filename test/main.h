#ifndef MAIN_H
#define MAIN_H

//IMPORTING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <starg.h>
#include <unistd.h>


//TYPES STRUCTURE

/**
 * struct format - struct to find format to print text
 *
 * @c: format char
 * @f: function associated
 */

typedef struct format
{
	char *c;
	int (*f)(va_list);
} format_in;

//PROTOTYPES

int _printf(const char *format, ...);
int (*def_type(char *format))(va_list);
_putchar(char c);
int print_c(va_list type_arg);
int print_s(va_list type_arg);
int identifier(va_list type_arg);

#endif /* MAIN_H */
