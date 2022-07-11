<h1 align="center">_printf</h1>
_printf() is a custom function that prints formatted text to the standard output. Its based on the printf() function from the  C standar input/output library <stdio.h>.
<h2>Description</h2>
_printf() is a variadic function that takes at least one string argument (format string) and then a variable number of arguments.
The format string can contain characters to be directly printed to stdout or percentage characters followed by a conversion specifier (e.g. %c where c is the conversion specifier for an unsigned char). For every "%specifier" in the format string _printf() expects one argument from the variable argument list. If the user inputs more arguments than expected from the format string _printf() will ignore them. If the user inputs less arguments than expected _printf() will have unexpected behaviour.

<h2>Files</h2>

**_printf.c** - Main code logic of _printf.

**get_spec.c** - Function that returns correct print function depending on conversion specifier.

**print_ints.c** - This file contains all the number print functions returned by get_spec.

**print_functions1.c** - This file contains some of the printing functions.
>f_ch - Function that prints a character.
>f_str - Function that prints a string.
>f_percent - Function that prints a percent character.
>f_HEX - Function that prints a number in hexadecimal base with capital letters.
**print_functions2.c** - This file contains the other printing functions.
>f_int - Function that prints a number in base 10.
>f_bin - Function that prints a number in base 2.
>f_uns - Function that prints an unsigned integer in base 10.
>f_oct - Function that prints a number in base 8.
>f_hex - Function that prints a number in hexadecimal base with lowercase letters.
