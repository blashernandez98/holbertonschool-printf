#include <stdarg.h>
#include "main.h"

/**
 * f_HEX - print hexadecimal number in uppercase
 * @arg_ptr: pointer to arg.
 *
 * Return: Number of digits printed
 */

int f_HEX(va_list arg_ptr)
{
	return (itoa(va_arg(arg_ptr, unsigned int), 16, "0123456789ABCDEF"));
}
