#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_spec - Get correct function to print.
 * @c: Specifier char.
 *
 * Return: Pointer to function that prints.
 */

int (*get_spec(char c))(va_list)
{
	int i;
	spec_t spec_arr[] = {
		{'c', f_ch},
		{'s', f_str},
		{'%', f_percent},
		{'\0', f_nil},
		{'\n', f_nl},
		{'d', f_int},
		{'i', f_int}
	};

	for (i = 0; i < 7; i++)
	{
		if (c == spec_arr[i].spec)
			return (spec_arr[i].f);
	}
	return (NULL);
}
