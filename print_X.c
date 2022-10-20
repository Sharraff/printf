#include "main.h"

/**
 * print_X - prints an unsigned int in octal format
 * @X: given unsigned int
 * @f: pointer to the given flag
 *
 * Return: the length of the characters printed
 */
int print_X(va_list X, flag *f)
{
	int length = 0;
	unsigned long int n = va_arg(X, unsigned int);

	if (n > 0)
	{
		if (f->hash)
			length += _puts("0X");
	}

	length += _puts(convert(n, 16, 0));

	return (length);
}
