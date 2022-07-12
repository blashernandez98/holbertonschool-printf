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
	return (_itoa(n, 10, "0123456789") + res);
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

	return (_itoa(num, 2, "01"));
}

/**
 * f_uns - Print unsigned
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits.
 */

int f_uns(va_list arg_ptr)
{
	return (_itoa(va_arg(arg_ptr, unsigned int), 10, "0123456789"));
}

/**
 * f_oct - Print octal
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits.
 */

int f_oct(va_list arg_ptr)
{
	return (_itoa(va_arg(arg_ptr, unsigned int), 8, "01234567"));
}

/**
 * f_hex - Print hexadecimal number.
 * @arg_ptr: Pointer to arg.
 *
 * Return: Number of digits printed.
 */

int f_hex(va_list arg_ptr)
{
	return (_itoa(va_arg(arg_ptr, unsigned int), 16, "0123456789abcdef"));
}
