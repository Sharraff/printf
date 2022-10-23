#include "main.h"

/**
 * print_int - prints a given integer
 * @integer: the given integer to be printed
 * @f: the given flag
 *
 * Return: the length of the integer printed
 */
int print_int(va_list integer, flag *f)
{
	int negative = 0;
	long int num;
	unsigned long int n = 0;
	char *s;

	if (f->l)
		n = va_arg(integer, long int);

	else
		n = va_arg(integer, int);

	num = n;
	if (num < 0)
	{
		num *= -1;
		n = num;
		negative = 1;
	}

	s = convert(n, 10, 0);
	if (f->precision != -1)
		s = print_precision(s, f, negative);
	else
	{
		if (f->width)
			s = print_width(s, f);

		if (f->plus && !negative)
			s = str_concat("+", s);;

		if (f->space && !negative)
			s = str_concat(" ", s);

		if (negative)
			s = str_concat("-", s);
	}

	return (_puts(s));
}
