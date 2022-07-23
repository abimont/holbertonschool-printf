#include "main.h"

/**
 * print_s - prints a string
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
		_putchar(str[i++]);
	return (i);
}

/**
 * print_c - prints a char
 * @type_arg: contains variable to print
 *
 * Return: number of characters printed
 */

int print_c(va_list type_arg)
{
	char character = va_arg(type_arg, int);

	if (!character)
		character = '\0';
	_putchar(character);

	return (1);
}

/**
 * print_di - prints a base 10 integer
 * @type_arg: contains variable to print
 *
 * Return: number of characters printed
 */

int print_di(va_list type_arg)
{
	int digit = va_arg(type_arg, int);
	int div, len;
	unsigned int number;

	div = 1;
	len = 0;
	number = digit;

	if (digit < 0)
	{
		number *= -1;
		_putchar('-');
		len++;
	}
	while (number / div > 9)
		div *= 10;
	while (div != 0)
	{
		_putchar(number / div + '0');
		len++;
		number %= div;
		div /= 10;
	}
	return (len);
}

/**
 * identifier - type identification character
 * @type_arg: contains variable to print
 *
 * Return: number of characters printed
 */

int identifier(va_list type_arg)
{
	(void)type_arg;
	return (write(1, "%", 1));
}

