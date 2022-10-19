#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct fg - struct for flags
 * @hash: # flag
 * @space: ' ' flag
 * @plus: + flag
 *
 */
typedef struct fg
{
        int hash;
        int space;
        int plus;
} flag;

int _putchar(char c);
int _puts(char *str);
int _strlen(char *str);
char *convert(unsigned long int num, int base, int lowercase);
int print_c(va_list c, flag *f);
int print_s(va_list s, flag *f);
int print_b(va_list b, flag *f);
int print_format(const char *format, va_list args);
int _printf(const char *format, ...);

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


#endif
