#include "main.h"

/**
 * print_x - prints an unsigned int in octal format
 * @x: given unsigned int
 * @f: the given flag
 *
 * Return: the length of the characters printed
 */
int print_x(va_list x, flag *f)
{
	int length = 0;
	unsigned long int n;

	n = va_arg(x, unsigned long int);
	if (n > 0)
	{
		if (f->hash)
			length += _puts("0x");
	}

	length += _puts(convert(n, 16, 1));

	return (length);
}
