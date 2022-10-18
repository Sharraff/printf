#include "main.h"
#include <stdarg.h>
/**
 * print_S - this function prints non printable ascii characters in hexadecimal
 *
 * @S: array of input characters to print
 * Return: 1
 */
int print_S(va_list S)
{
	char *arr = va_arg(S, char *);
	unsigned int i = 0;
	int count = 0;


	if (arr == NULL)
		arr = "(null)";
	for (; arr[i]; i++)
	{
		if (arr[i] < 32 || arr[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count = count + print_X(S);

		}
		else
		{
			_putchar(arr[i++]);
			count++;
		}
	}
	return (count);
}
