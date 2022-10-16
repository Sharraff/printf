#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int print_c(va_list);

typedef struct fmt
{
	char spec;
	int (*func)(va_list);
} fmt_spec;

#endif
