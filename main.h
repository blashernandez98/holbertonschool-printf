#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct spec
{
char spec;
int (*f)(va_list);
} spec_t;

int (*get_spec(char))(va_list);
int f_ch(va_list);
int f_str(va_list);
int f_percent(va_list);
int _printf(const char *, ...);
int _putchar(char);
int _puts(char *);

#endif
