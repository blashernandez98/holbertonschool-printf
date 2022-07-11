#include "main.h"
#include <stdarg.h>
#include <stddef.h>

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

	if (!format)
		return (-1);
	va_start(arg_ptr, 0);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
			{
				f = get_spec(format[i]);
				if (!f)
				{
					_putchar('%');
					_putchar(format[i]);
					res = res + 2;
					continue;
				}
				else
					res += (*f)(arg_ptr);
			}
			else
				return (-1);
		}
		else
			res += _putchar(format[i]);
	}
	va_end(arg_ptr);
	return (res);
}
