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
	unsigned int i, len;

	int (*f)(va_list);

	i = 0;
	len = 0;

	if (!format)
		return (-1);

	va_start(type_arg, format);

	for (	;format[i]; i++)
	{
		if (format[i] == '%')
		{
			_putchar(format[i]);
			len ++;
			i++;
			continue;	
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = def_type(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(type_arg);
				continue;
			}
		}
	}
	va_end(type_arg);

	return (len)
}
