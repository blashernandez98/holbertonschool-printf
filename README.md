<h1 align="center">_printf</h1>
_printf() is a custom function that prints formatted text to the standard output. Its based on the printf() function from the  C standard input/output library "<stdio.h>".

<h2>Description</h2>

_printf() is a variadic function that takes at least one string argument (format string) and then a variable number of arguments.
The format string can contain characters to be directly printed to stdout or percentage characters followed by a conversion specifier (e.g. %c where c is the conversion specifier for an unsigned char). For every "%specifier" in the format string _printf() expects one argument from the variable argument list. If the user inputs more arguments than expected from the format string _printf() will ignore them. If the user inputs less arguments than expected _printf() will have unexpected behaviour.

<h2>Files</h2>

**_printf.c** - Main code logic of _printf.

**get_spec.c** - Function that returns correct print function depending on conversion specifier.

**print_functions1.c** - This file contains some of the printing functions.

>f_ch - Function that prints a character.<br>
>f_str - Function that prints a string.<br>
>f_percent - Function that prints a percent character.<br>
>f_HEX - Function that prints a number in hexadecimal base with capital letters.<br>

**print_functions2.c** - This file contains the other printing functions.

>f_int - Function that prints a number in base 10.<br>
>f_bin - Function that prints a number in base 2.<br>
>f_uns - Function that prints an unsigned integer in base 10.<br>
>f_oct - Function that prints a number in base 8.<br>
>f_hex - Function that prints a number in hexadecimal base with lowercase letters.<br>

**_putchar.c** - This file contains the _putchar function.
**puts.c** - This file contains the puts (put string) function.
**main.h** - Header file with all the definitions and external libraries used in other files.

<h2>Format specifiers</h2>
Characters that following a '%' specify a type conversion.<br>
Format specifiers follow this prototype: %type.<br>
The following types are supported:<br>
Type | Output
------------------- | -------------------
%c | Single character
%s | String of characters
%d or %i | Signed decimal integer
%u | Unsiged decimal integer
%b | Unsiged binary
%o | Unsiged octal
%x | Unsiged hexadecimal (lowercase)
%X | Unsiged hexadecimal (uppercase)
%% | A % followed by another % will print a single %.

<h2>Return value</h2>
On success _printf() returns the number of characters sent to stdout. On failure it returns -1.
