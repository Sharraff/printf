#include <unistd.h>
#include "main.h"

/**
 * print_s - a function that prints a string s
 * @s: string to print
 * @f: given flags
 * Return: 1
 */
int print_s(va_list s, flag *f)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
	 	_putchar(str[i++]);
	}
	return (i);
}
