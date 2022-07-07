#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 *
 */

int (*get_spec_func(char c))(va_list)
{
	int i;
	spec_t spec_arr[] = {
		{'c', f_ch},
		{'s', f_str},
		{'%', f_percent}
	};

	for (i = 0; i < 3; i++)
	{
		if (c == spec_arr[i].spec)
			return (spec_arr[i].f);
	}
	return (NULL);
}
