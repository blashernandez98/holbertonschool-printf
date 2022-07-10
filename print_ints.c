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
	long int n = va_arg(arg_ptr, int);
	int res = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		res++;
	}
	return (itoa(n, 10, "0123456789") + res);
}

/**
 * f_bin - Prints binary.
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits.
 */

int f_bin(va_list arg_ptr)
{
	unsigned int num = va_arg(arg_ptr, unsigned int);

	return (itoa(num, 2, "01"));
}

/**
 * f_uns - Print unsigned
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits.
 */

int f_uns(va_list arg_ptr)
{
	return (itoa(va_arg(arg_ptr, unsigned int), 10, "0123456789"));
}
