#include <unistd.h>
#include "main.h"

/**
 * print_s - a function that prints a string s
 *
 * @s: string to print
 * @f: the given flags
 * Return: 1
 */
int print_s(va_list s, flag *f)
{
	char *str = va_arg(s, char *);
	int length = 0, i;

	(void)f;
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; ++i)
		length += _putchar(str[i]);

	return (length);
}
