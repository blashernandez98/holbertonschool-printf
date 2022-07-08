#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

typedef struct specifier
{
	char spec;
	int (*f)(va_list);
} spec_t;

int _printf(const char *, ...);
int _putchar(char);
int _puts(char *);
int itoa(int, int);

int f_ch(va_list);
int f_str(va_list);
int f_percent(va_list);
int f_nil(va_list);
int f_nl(va_list);
int f_int(va_list);

int (*get_spec_func(char))(va_list);
#endif
