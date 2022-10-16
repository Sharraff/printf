#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int print_s(va_list s);

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
