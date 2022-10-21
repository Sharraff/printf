#include "main.h"

/**
 * print_u - prints and unsigned integer
 * @integer: the given integer
 * @f: the given flag
 *
 * Return: the length of the char printed
 */
int print_u(va_list integer, flag *f)
{
	unsigned long int num = va_arg(integer, unsigned long int);

	(void)f;
	return (_puts(convert(num, 10, 0)));
}
