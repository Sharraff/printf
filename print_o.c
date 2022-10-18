#include "main.h"

int print_o_recursive(unsigned int num);
/**
 * print_o - prints an unsigned int in octal format
 * @num: given unsigned int
 *
 * Return: the length of the characters printed
 */
int print_o(va_list num)
{
	int length = 0;
	unsigned int n;

	n = va_arg(num, unsigned int);
	length = print_o_recursive(n);

	return (length);
}

/**
 * print_o_recursive - prints a given number in octal format
 * @num: the given number
 *
 * Return: length of char printed
 */
int print_o_recursive(unsigned int num)
{
	if (num < 8)
		return (_putchar(num + '0'));

	return (print_o_recursive(num / 8) + print_o_recursive(num % 8));
}
