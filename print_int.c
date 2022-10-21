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
	int length = 0;
	long int num;
	unsigned long int n = 0;

	n = va_arg(integer, unsigned long int);
	num = (long int)n;

	if (f->plus && num >= 0)
		length += _putchar('+');

	if (f->space && num >= 0)
		length += _putchar(' ');

	if (num < 0)
	{
		length += _putchar('-');
		num *= -1;
		n = num;
	}

	length += _puts(convert(n, 10, 0));

	return (length);
}
