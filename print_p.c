#include "main.h"

/**
 * print_p - prints a given address
 * @pointer: the given address
 * @f: the given flag
 *
 * Return: the length of the address printed
 */
int print_p(va_list pointer, flag *f)
{
	int length;
	unsigned long int p = (unsigned long int) va_arg(pointer, void *);

	(void)f;
	if (!p)
		return (_puts("(nil)"));

	length = _puts("0x") + _puts(convert(p, 16, 1));

	return (length);
}
