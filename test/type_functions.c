#include "main.h"

/**
 * print_s - print a string
 * @s: string
 *
 * Return: i
 */

int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}

int print_c(va_list c)
{
	char character = va_arg(s, char);

	if (character == NULL)
		character = "(null)";
	_putchar(character);

	return (1);
}
