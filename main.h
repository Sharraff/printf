#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

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
	int h;
	int l;
	int width;
	int zero;
	int minus;
	int precision;
} flag;

int _putchar(char c);
int _puts(char *str);
int _strlen(char *str);
char *str_concat(char *s1, char *s2);
int _isdigit(char ch);
char *convert(unsigned long int num, int base, int lowercase);
void sort_flags(flag *flags);
int print_c(va_list c, flag *f);
int print_per_symb(va_list va_lst, flag *f);
int print_s(va_list s, flag *f);
int print_int(va_list integer, flag *f);
int print_b(va_list b, flag *f);
int print_format(const char *format, va_list args);
int _printf(const char *format, ...);
int print_x(va_list x, flag *f);
int print_X(va_list X, flag *f);
int print_o(va_list num, flag *f);
int print_u(va_list integer, flag *f);
int print_S(va_list S, flag *f);
int print_p(va_list pointer, flag *f);
int print_error_length_mod(const char *str);
int rot13(va_list s, flag *f);
int rev_string(va_list str, flag *f);
void initialize_flag(flag *f);
int check_width(char flg, va_list spec, flag *f);
char *print_width(char *str, flag *f);
char *print_precision(char *str, flag *f, int negative);
int validate_precision(char ch, va_list spec, flag *f);

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
