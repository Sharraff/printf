include "main.h"

int print_b_recursive(unsigned int num);
/**
 * print_b - prints an unsigned int in octal format
 * @b: given unsigned int
 *
 * Return: the length of the characters printed
 */
int print_b(va_list b)
{
	int length = 0;
	unsigned int n;

	n = va_arg(b, unsigned int);
	length = print_b_recursive(n);

	return (length);
}

/**
 * print_b_recursive - prints a given number in octal format
 * @num: the given number
 *
 * Return: length of char printed
 */
int print_b_recursive(unsigned int num)
{
	if (num < 2)
		return (_putchar(num + '0'));

	return (print_b_recursive(num / 2) + print_b_recursive(num % 2));
}
