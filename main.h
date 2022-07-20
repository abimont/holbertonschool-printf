#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <starg.h>
#include <unistd.h>

/**
 * struct format - struct to find format to print text
 *
 * @c: format char
 * @f: function associated
 */

typedef struct format
{
	char *c;
	int (*f)(va_list arg);
} format_in;

int _printf(const char *format, ...);

#endif /* MAIN_H */
