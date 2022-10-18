#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_int(va_list integer);
int print_b(va_list b);
int print_format(const char *format, va_list args);
int _printf(const char *format, ...);
int print_x(va_list x);
int print_X(va_list X);
int print_o(va_list num);
int print_u(va_list integer);
int print_S(va_list S);

/**
 * struct fmt - struct to match a specifier to a function that processes it
 * @spec: the specifier
 * @func: pointer to the function that processes the spec
 *
 */
typedef struct fmt
{
	char spec;
	int (*func)(va_list);
} fmt_spec;


#endif
