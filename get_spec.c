#include "main.h"
#include <stddef.h>

/*
*
*
*/

int (*get_spec(char s))(va_list)
{
	spec_t specs[] = {
		{'c', f_ch},
		{'s', f_str},
		{'%', f_percent}
	};
	int i;

	for (i = 0; i < 3; i++)
	{
		if (s == specs[i].spec)
			return (specs[i].f);
	}
	return (NULL);
}
