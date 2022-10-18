#include "main.h"

int print_X_recursive(unsigned int num);
/**
 * print_X - prints an unsigned int in octal format
 * @X: given unsigned int
 *
 * Return: the length of the characters printed
 */
int print_X(va_list X)
{
	int length = 0;
	unsigned int n;

	n = va_arg(X, unsigned int);
	length = print_X_recursive(n);

	return (length);
}

/**
 * print_X_recursive - prints a given number in octal format
 * @num: the given number
 *
 * Return: length of char printed
 */
int print_X_recursive(unsigned int num)
{
	if (num < 16)
	{
		if (num == 10)
			return (_putchar('A'));
		else if (num == 11)
			return (_putchar('B'));
		else if (num == 12)
			return (_putchar('C'));
		else if (num == 13)
			return (_putchar('D'));
		else if (num == 14)
			return (_putchar('E'));
		else if (num == 15)
			return (_putchar('F'));

		return (_putchar(num + '0'));
	}

	return (print_X_recursive(num / 16) + print_X_recursive(num % 16));
}
