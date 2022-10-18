#include "main.h"

int print_p_recursive(size_t num);

/**
 * print_p - prints a given address
 * @pointer: the given address
 *
 * Return: the length of the address printed
 */
int print_p(va_list pointer)
{
	int length;
	size_t p = (size_t) va_arg(pointer, void *);

	if (!p)
		return (_puts("(nil)"));

	length = _puts("0x") + print_p_recursive(p);

	return (length);
}


/**
 * print_p_recursive - prints a given number in octal format
 * @num: the given number
 *
 * Return: length of char printed
 */
int print_p_recursive(size_t num)
{
	if (num < 16)
	{
		if (num > 9)
			return (_putchar('a' + (num - 10)));

		return (_putchar(num + '0'));
	}

	return (print_p_recursive(num / 16) + print_p_recursive(num % 16));
}
