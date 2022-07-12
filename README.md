# _printf
_printf() is a custom function that prints formatted text to the standard output. Its based on the printf() function from the  C standard input/output library "<stdio.h>".

## Description

_printf() is a variadic function that takes at least one string argument (format string) and then a variable number of arguments.
The format string can contain characters to be directly printed to stdout or percentage characters followed by a conversion specifier (e.g. %c where c is the conversion specifier for an unsigned char). For every "%specifier" in the format string _printf() expects one argument from the variable argument list. If the user inputs more arguments than expected from the format string _printf() will ignore them. If the user inputs less arguments than expected _printf() will have unexpected behaviour.

## Files

**_printf.c** - File containing implementation of _printf.

**get_spec.c** - File containing get_spec function that returns correct print function depending on conversion specifier.

**print_functions1.c** - File containing some of the printing functions.

>f_ch - Function that prints a character.<br>
>f_str - Function that prints a string.<br>
>f_percent - Function that prints a percent character.<br>
>f_HEX - Function that prints a number in hexadecimal base with capital letters.<br>

**print_functions2.c** - File containing the other printing functions.

>f_int - Function that prints a number in base 10.<br>
>f_bin - Function that prints a number in base 2.<br>
>f_uns - Function that prints an unsigned integer in base 10.<br>
>f_oct - Function that prints a number in base 8.<br>
>f_hex - Function that prints a number in hexadecimal base with lowercase letters.<br>

**_itoa.c** - File with _itoa function that prints numbers in specified base with specified digit characters.<br>
**_putchar.c** - File with _putchar function.<br>
**_puts.c** - File with _puts (put string) function.<br>
**main.h** - Header file with all the definitions and external libraries used in other files.<br>

## How to use

## Format specifiers
Characters that following a '%' specify a type conversion.<br>
Format specifiers follow this prototype:     %type.<br>
The following types are supported:
| Type     | Output |
| -------- | -------|
| c       | Single character |
| s       | String of characters |
| d or i | Signed decimal integer |
| u       | Unsiged decimal integer |
| b       | Unsiged binary |
| o       | Unsiged octal |
| x       | Unsiged hexadecimal (lowercase) |
| X       | Unsiged hexadecimal (uppercase) |
| %       | A % followed by another % will print a single %. |

## Return value
On success _printf() returns the number of characters printed to stdout excluding the terminating null byte ('\0').<br>
On failure it returns -1.

## Examples
### This is a sample main function that calls our _printf() function:
	#include "main.h"

	int main(void)
	{
		int number = 43;
		char character = 'K';
		char *string = "Sample string";

		_printf("This is a single-argument call to _printf()\n");
		_printf("This is a char: %c\n", character);
		_printf("This is a string: %s\n", string);
		_printf("This is a number in base 10: %d\n", number);
		_printf("This is a number in base 2: %b\n", number);

		return (0);
	}
### Output:
	This is a single-argument call to _printf()
	This is a char: K
	This is a string: Sample string
	This is a number in base 10: 43
	This is a number in base 2: 101011
## Work Flow Diagram:
### Main printf
### ![_printf flowchart-_printf drawio](https://user-images.githubusercontent.com/105363828/178500200-02edcca3-a157-425c-91ab-3ccf25373a74.png)
### Get specifier function
### ![_printf flowchart-get_spec drawio (1)](https://user-images.githubusercontent.com/105363828/178500589-c72dba33-dbb0-40bf-b89a-48dcdcc6c0c5.png)
## Contributors
Facundo Blanco & Blas Hernandez
