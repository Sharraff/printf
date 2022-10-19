#include "main.h"
/**
 * print_b - A function that prints an unsigned int i in binary notation
 * @b: unsigned int to print
 * @f: the given flag
 *
 * Return: number of printed digits
 */
int print_b(va_list b, flag *f)
{
	unsigned long int n = va_arg(b, unsigned int);

	(void)f;
	return (_puts(convert(n, 2, 0)));
}
