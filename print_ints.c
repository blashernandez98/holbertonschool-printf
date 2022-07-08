#include <stdarg.h>
#include "main.h"

/**
 * f_int - Prints integer.
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits.
 */

int f_int(va_list arg_ptr)
{
	return (itoa(va_arg(arg_ptr, int), 10));
}

/**
 * f_bin - Prints binary.
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits.
 */

int f_bin(va_list arg_ptr)
{
	int num = va_arg(arg_ptr, unsigned int);
	if (num < 0)
		num *= -1;
	return (itoa(va_arg(num, 2));
}
