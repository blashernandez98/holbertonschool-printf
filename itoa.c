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
	long int n = num;

	if (n < 0)
	{
		n *= -1;
		res += _putchar('-');
	}
	if (n / base != 0)
	{
		res += itoa(n / base, base);
		res += _putchar(n % base + '0');
	}
	else
		return (res + _putchar(n + '0'));
	return (res);
}
