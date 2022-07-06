#include "printf.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list arg_ptr;
	char *aux_str;
	int i, res = 0;

	va_start(arg_ptr, 0);

	for (i = 0; (format && format[i]); i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					putchar(va_arg(arg_ptr, int));
					res++;
					break;
				case 's':
					aux_str = va_arg(arg_ptr, char *);
					puts(aux_str);
					res += strlen(aux_str);
					break;
				case '%':
					putchar('%');
					res++;
					break;
				default:
					break;
			}

		}
		else
		{
			putchar(format[i]);
			res++;
		}
	}
	return (res);
}
