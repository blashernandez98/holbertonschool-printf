#include "main.h"
#include <stdarg.h>

/**
 *
 */

int f_ch(va_list arg_ptr)
{
	return (_putchar(va_arg(arg_ptr, int)));
}

/**
 *
 */

int f_str(va_list arg_ptr)
{
	return (_puts(va_arg(arg_ptr, char *)));
}

/**
 *
 */

int f_percent(va_list arg_ptr)
{
	return (_putchar('%'));
}
