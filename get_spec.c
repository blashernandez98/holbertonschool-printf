#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_spec - Get correct function to print.
 * @c: Specifier char.
 *
 * Return: Pointer to function that prints if known specifier.
 * NULL otherwise.
 */

int (*get_spec(char c))(va_list)
{
	int i;
	spec_t spec_arr[] = {
		{'c', f_ch},
		{'s', f_str},
		{'%', f_percent},
		{'u', f_uns},
		{'d', f_int},
		{'i', f_int},
		{'b', f_bin},
		{'o', f_oct},
		{'x', f_hex},
		{'X', f_HEX}
	};

	for (i = 0; i < 10; i++)
	{
		if (c == spec_arr[i].spec)
			return (spec_arr[i].f);
	}
	return (NULL);
}
