#include "main.h"

/**
 * print_o - prints an unsigned int in octal format
 * @num: given unsigned int
 * @f: pointer to the given
 *
 * Return: the length of the characters printed
 */
int print_o(va_list num, flag *f)
{
	int length = 0;
	unsigned long int n = va_arg(num, unsigned int);

	if (n > 0)
	{
		if (f->hash)
			length += _putchar('0');
	}

	length += _puts(convert(n, 8, 0));

	return (length);
}
