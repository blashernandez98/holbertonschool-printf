#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 *
 */

int _printf(const char *format, ...)
{
	int i, res = 0;
	va_list arg_ptr;
	int (*func)(va_list);

	va_start(arg_ptr, 0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			func = get_spec_func(format[i]);
		}
		if (format[i] == '%' && func)
		{
			res += (*func)(arg_ptr);
		}
		else
		{

		}
	}	
}
