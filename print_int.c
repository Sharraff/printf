#include "main.h"

int print_positive_int(int num);

/**
 * print_int - prints a given integer
 * @integer: the given integer to be printed
 *
 * Return: the length of the integer printed
 */
int print_int(int integer)
{
	int length = 0;
	int num = va_arg(integer, int);

	if (integer < 0)
	{
		length += _putchar('-');
		integer *= -1;
	}

	length += recursive_print_int(num);
}

/**
 * recursive_print_int - print a given positive integer
 * @num: the given integer to be printed
 *
 * Return: the length of the printed integer
 */
int recursive_print_int(int num)
{
	if (num < 10)
		return (_putchar(num + '0'));

	return (print_positive_int(num / 10) + print_positive_int(num % 10));
}
