#include <stdarg.h>
#include "main.h"

/**
 * f_int - Prints integer.
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits
 */

int f_int(va_list arg_ptr)
{
	return (itoa(va_arg(arg_ptr, int), 10));
}
