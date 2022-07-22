#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list type_arg;
	unsigned int i = 0, len = 0;

	int (*f)(va_list);

	if (!format)
		return (-1);

	va_start(type_arg, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			len++;
		}
		if (!format[i])
			return (len);
		f = def_type(&format[i + 1]);
		if (f != NULL)
		{
			len += f(type_arg);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		len++;
		if (format[i + 1] == '%')
		{
			_putchar('%');
			i += 2;
		}
		else
			i++;
	}
	va_end(type_arg);
	return (len);
}

