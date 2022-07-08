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
	void(arg_ptr);
	return (_putchar('%'));
}

/**
 *
 */

int f_nl(va_list arg_ptr)
{
	void(arg_ptr);
	return (_putchar('\n'));
}

/**
 *
 */

int f_nil(va_list arg_ptr)
{
	void(arg_ptr);
	return (0);
}
