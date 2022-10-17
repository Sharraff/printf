#include "main.h"
#include <stdarg.h>

/**
 *_printf - function for formatted output
 *
 *@fmt: list of arguments to printing
 *Return: Number of characters to printing
 */
int _printf(char *fmt, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0;
	unsigned int counter = 0;

	if (fmt == NULL)
		return (-1);
	va_list (ap, fmt);
	while (fmt && fmt[i])
	{
		if (fmt[i] != '%')
		{
			_putchar(fmt[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			f = print_format(&fmt[i + 1]);
			if (f = NULL)
				return (-1);
			i += 2;
			counter += f(ap);
			continue;
		}
		i++;
	}
	va_end(ap);
	return (counter);
}
