#include "main.h"

/**
 * def_type - define elements to print's type
 * @s: type passed as argument
 *
 * Return: function pointer
 */

int (*def_type(const char *format))(va_list)
{
	format_in type[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", identifier},
	};

	int i;

	i = 0;
	while (type[i].c != NULL)
	{
		if (type[i].c == *format)
			return (type[i].f);
		i++;
	}

	return (NULL);
}
