#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Similar to printf.
 * @format: Format string.
 *
 * Return: Number of chars to stdout.
 */

int _printf(const char *format, ...)
{
	va_list arg_ptr;
	int (*f)(va_list);
	int i, res = 0;

	if (!format) /* Check for NULL format */
		return (-1);
	
	va_start(arg_ptr, 0);
	
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%') /* Check if current char is % */
		{
			if (format[++i]) /* When % found check for next character */
			{
				f = get_spec(format[i]); /* Point f to correct print function */
				if (!f) /* Case when unkown conversion specifier found */
				{
					_putchar('%');
					_putchar(format[i]);
					res += 2;
					continue;
				}
				res += (*f)(arg_ptr); /* Call function pointed by f with arg_ptr as param */
			}
			else
				return (-1);
		}
		else
			res += _putchar(format[i]); /* Print regular characters in format string */
	}
	va_end(arg_ptr);
	return (res);
}
