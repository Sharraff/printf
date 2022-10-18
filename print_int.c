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
	int length = 0, num;
	unsigned long int n;

	num = va_arg(integer, int);
	if (f->space)

		length++;

	if (f->plus && num >= 0)
		length += _putchar('+');

	if (num < 0)
	{
		length += _putchar('-');
		n = -1 * (unsigned long int)num;
	}

	length += _puts(convert(n, 10, 0));

	return (length);
}
