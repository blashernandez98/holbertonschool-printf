#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Printf
 * @format: Format string.
 *
 * Return: Number of chars printed.
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
			func = get_spec_func(format[++i]);
			if (func)
				res += (*func)(arg_ptr);
			else
				res += (_putchar('%') + _putchar(format[i]));
		}
		else
			res += _putchar(format[i]);
	}
	if (!format)
		return (-1);
	return (res);
}
