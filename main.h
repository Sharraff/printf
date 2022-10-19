#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct fg - struct for flags
 * @space: ' '
 * @plus: '+'
 * @hash: '#'
 */
typedef struct fg
{
	int space;
	int plus;
	int hash;
} flag;

/**
 * struct fmt - struct to match a specifier to a function that processes it
 * @spec: the specifier
 * @func: pointer to the function that processes the spec
 *
 */
typedef struct fmt
{
	char spec;
	int (*func)(va_list, flag *);
} fmt_spec;

int _putchar(char c);
int print_c(va_list c, flag *f);
int print_s(va_list s, flag *f);
int print_format(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
