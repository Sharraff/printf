#include "main.h"

/**
 * print_per_symb - prints %
 * @va_lst: ...
 * @f: ...
 *
 * Return: the length of printed %
 */
int print_per_symb(va_list va_lst, flag *f)
{
	(void)f;
	(void)va_lst;

	return (_putchar('%'));
}
