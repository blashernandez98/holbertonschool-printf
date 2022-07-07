#include "main.h"
#include <stdarg.h>

/**
 * _printf - Similar to printf.
 * @format: Format string.
 *
 * Return: Number of chars to stdout
 */

int _printf(const char *format, ...)
{
	va_list arg_ptr;
	int (*f)(va_list);
	int i, res = 0;

	va_start(arg_ptr, 0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			f = get_spec(format[++i]);
			res += (*f)(arg_ptr);
		}
		else
			res += _putchar(format[i]);
	}
	if (!format)
		return(-1)
	return (res);
}
