#include "main.h"

/**
 * _puts - Function that prints a string to stdout.
 * @s: String to print.i
 *
 * Return: Length of string.
 */

int _puts(char *s)
{
	int len = 0;

	while (s && *s)
	{
		_putchar(*s);
		s++;
		len++;
	}
	if (!s)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		len = 6;
	}
	return (len);
}
