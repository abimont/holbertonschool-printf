#include "main.h"

/**
 * def_type - define elements to print's type
 * @s: type passed as argument
 *
 * Return: function pointer
 */

int (*def_type(char *format))(va_list)
{
	format_in type[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", identifier},
	};

	int i;

	i = 0;
	while (type[i].format != NULL)
	{
		if (*(type[i].format) == *s)
			return (type[i].f);
		i++;
	}

	return (1);
}
