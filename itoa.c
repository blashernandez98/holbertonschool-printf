#include "main.h"

/**
 * itoa - Print num in base b.
 * @num: Number to print.
 * @base: Base.
 *
 * Return: Number of digits printed.
 */

int itoa(int num, int base)
{
	int res = 0;

	if (num / base != 0)
	{
		res += itoa(num / base, base);
		res += _putchar(num % base + '0');
	}
	else
		return (_putchar(num + '0'));
	return (res);
}
