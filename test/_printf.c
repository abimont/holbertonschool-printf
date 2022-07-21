#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format to print 
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list type_arg;
	unsigned int i, print;

	int (*f)(va_list);

	i = 0;
	print = 0;

	if (!format)
		return (-1);

	va_start(type_arg, format);


}
