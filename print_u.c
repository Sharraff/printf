#include "main.h"

int print_u_recursive(unsigned int num);

/**
 * print_u - prints and unsigned integer
 * @integer: the given integer
 *
 * Return: the length of the char printed
 */
int print_u(va_list integer)
{
	unsigned int num = va_arg(integer, unsigned int);
	int length;

	length = print_u_recursive(num);

	return (length);
}

/**
 * print_u_recursive - prints a given unsigned int
 * @num: the given unsigned int
 *
 * Return: the length of the printed characters
 */
int print_u_recursive(unsigned int num)
{
	if (num < 10)
		return (_putchar(num + '0'));

	return (print_u_recursive(num / 10) + print_u_recursive(num % 10));
}
