#include "main.h"

/**
 * itoa - Print num in base b.
 * @num: Number to print.
 * @base: Base.
 *
 * Return: Number of digits printed.
 */

int itoa(unsigned int num, unsigned int base, char *digits)
{
	int res = 0;
	long int n = num;

	if (n / base != 0)
	{
		res += itoa(n / base, base, digits);
		res += _putchar(digits[n % base]);
	}
	else
		return (res + _putchar(digits[n % base]));
	return (res);
}
