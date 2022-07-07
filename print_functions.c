#include "main.h"
#include <stdarg.h>

/**
* f_ch - function that prints a character
* @arg_ptr: argument
* Return: 1
*/

int f_ch(va_list arg_ptr)
{
	return (_putchar(va_arg(arg_ptr, int)));
}

/**
* f_str - function that prints a string
* @arg_ptr: argument
* Return: strlen of the string
*/

int f_str(va_list arg_ptr)
{
	return (_puts(va_arg(arg_ptr, char *)));
}

/**
* f_percent - print a %
* @arg_ptr: argument
* Return: 1
*/

int f_percent(va_list arg_ptr)
{
	return (_putchar('%'));
}
