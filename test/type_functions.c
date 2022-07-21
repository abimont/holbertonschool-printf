#include "main.h"

/**
 * print_s - print a string
 * @type_arg: contains variable to print
 *
 * Return: number of characters printed
 */

int print_s(va_list type_arg)
{
	char *str = va_arg(type_arg, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		putchar(str[i++]);
	return (i);
}

/**
 * print_c - print a char
 * @type_arg - contains variable to print
 *
 * Return: number of characters printed
 */

int print_c(va_list type_arg)
{
	char character = va_arg(type_arg, int);

	if (!character)
		character = "(null)";
	putchar(character);

	return (1);
}

/**
 * identifier - type identification character
 * @type_arg - contains variable to print
 *
 * Return: number of characters printed
 */

int identifier(va_list type_arg)
{
	(void)type_arg;
	return (write(1, "%", 1));
}

