#include "main.h"
#include <stdarg.h>

/**
 *_printf - function for formatted output
 *@fmt: list of arguments to printing
 *Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int counter = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	counter = print_format(format, ap);
	_putchar(-1);
	va_end(ap);

	return (counter);
}
