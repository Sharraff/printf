#include "main.h"

/**
 * print_c - prints a character on the stdout
 * @c: the character to be printed
 * @f: the given flags
 *
 * Return: the length of the char printed (1)
 */
int print_c(va_list c, flag *f)
{
	(void)f;
	return (_putchar(va_arg(c, int)));
}
