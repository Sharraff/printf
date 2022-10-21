#include "main.h"

/**
 * print_error_length_mod - handles errors for length modifiers
 * @str: format str
 *
 * Return: len of chars printed
 */
int print_error_length_mod(const char *str)
{
	int length = 0;

	length += _putchar(*str);
	str++;
	while (*str && *str != '%')
	{
		if (*str == 'h' || *str == 'l')
			continue;

		length += _putchar(*str);
		str++;
	}

	return (length);
}
