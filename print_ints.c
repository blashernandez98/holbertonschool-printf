#include <stdarg.h>
#include "main.h"

/**
 *
 */

int f_int(va_list arg_ptr)
{
	return (itoa(va_arg(arg_ptr, int), 10));
}
