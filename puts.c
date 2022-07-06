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

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		len++;
	}
	return (len);
}
