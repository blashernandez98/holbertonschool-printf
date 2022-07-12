#include "main.h"
#include <stdarg.h>

/**
 * f_ch - Print char
 * @arg_ptr: Pointer to arg.
 *
 * Return: 1
 */

int f_ch(va_list arg_ptr)
{
	return (_putchar(va_arg(arg_ptr, int)));
}

/**
 * f_str - Print string
 * @arg_ptr: Pointer to arg.
 *
 * Return: strlen(string)
 */

int f_str(va_list arg_ptr)
{
	return (_puts(va_arg(arg_ptr, char *)));
}

/**
 * f_percent - Print percent
 * @arg_ptr: Pointer to arg.
 *
 * Return: 1
 */

int f_percent(__attribute__((unused)) va_list arg_ptr)
{
	return (_putchar('%'));
}
/**
 * f_HEX - print hexadecimal number in uppercase
 * @arg_ptr: pointer to arg.
 *
 * Return: Number of digits printed
 */

int f_HEX(va_list arg_ptr)
{
	return (_itoa(va_arg(arg_ptr, unsigned int), 16, "0123456789ABCDEF"));
}
