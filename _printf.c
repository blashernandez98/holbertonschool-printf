#include "main.h"
#include <stdarg.h>

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
					_putchar(va_arg(arg_ptr, int));
					res++;
					break;
				case 's':
					aux_str = va_arg(arg_ptr, char *);
					res += _puts(aux_str);
					break;
				case '%':
					_putchar('%');
					res++;
					break;
				default:
					break;
			}

		}
		else
		{
			_putchar(format[i]);
			res++;
		}
	}
	return (res);
}
