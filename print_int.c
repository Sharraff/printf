#include "main.h"

int print_positive_int(int num);

/**
 * print_int - prints a given integer
 * @integer: the given integer to be printed
 *
 * Return: the length of the integer printed
 */
int print_int(va_list integer)
{
	int length = 0, num;
	unsigned int n;

	n = va_arg(integer, int);
	num = n;
	if (num < 0)
	{
		length += _putchar('-');
		num *= -1;
	}

	length += print_positive_int(num);

	return (length);
}

/**
 * recursive_print_int - print a given positive integer
 * @num: the given integer to be printed
 *
 * Return: the length of the printed integer
 */
int print_positive_int(int num)
{
	unsigned int n = num;

	if (n < 10)
		return (_putchar(n + '0'));

	return (print_positive_int(n / 10) + print_positive_int(n % 10));
}
