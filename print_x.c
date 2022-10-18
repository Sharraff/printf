#include "main.h"

int print_x_recursive(unsigned int num);
/**
 * print_x - prints an unsigned int in octal format
 * @x: given unsigned int
 *
 * Return: the length of the characters printed
 */
int print_x(va_list x)
{
	int length = 0;
	unsigned int n;

	n = va_arg(x, unsigned int);
	length = print_x_recursive(n);

	return (length);
}

/**
 * print_x_recursive - prints a given number in octal format
 * @num: the given number
 *
 * Return: length of char printed
 */
int print_x_recursive(unsigned int num)
{
	if (num < 16)
	{
		if (num == 10)
			return (_putchar('a'));
		else if (num == 11)
			return (_putchar('b'));
		else if (num == 12)
			return (_putchar('c'));
		else if (num == 13)
			return (_putchar('d'));
		else if (num == 14)
			return (_putchar('e'));
		else if (num == 15)
			return (_putchar('f'));

		return (_putchar(num + '0'));
	}

	return (print_x_recursive(num / 16) + print_x_recursive(num % 16));
}
