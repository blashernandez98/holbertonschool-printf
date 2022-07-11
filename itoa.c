#include "main.h"

/**
 * itoa - Print number in specified base using specified digits.
 * @num: Number to print.
 * @base: Base.
 * @digits: Digits for that base.
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
		return (_putchar(digits[n % base]));
	return (res);
}
