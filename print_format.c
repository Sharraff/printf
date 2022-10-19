#include "main.h"

int print_error(char spec, flag *f);
int validate_spec(char spec);
int validate_flag(char flg, flag *f);

/**
 * print_format - prints the format string to the stdout
 * @format: the format string
 * @args: the args to be formated
 *
 * Return: the length of the characters printed
 */
int print_format(const char *format, va_list args)
{
	const char *p;
	flag flags = {0, 0, 0};

	register int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (validate_flag(*p, &flags))
				p++;

			count += validate_spec(*p)
				? print_spec(*p, args, &flags)
				: print_error(*p, &flags);
		} else
			count += _putchar(*p);
	}
	return (count);
}

/**
 * validate_spec - checks if a character is a specifier
 * @spec: the given character to validate
 *
 * Return: 1 if spec, 0 otherwise
 */
int validate_spec(char spec)
{
	char *specs = "csdi";
	int i;

	for (i = 0; specs[i]; ++i)
	{
		if (specs[i] == spec)
			return (1);
	}

	return (0);
}

/**
 * print_error - prints the appropriate characters if the given spec is wrong
 * @spec: the given specifier
 * @f: pointer to the given flag
 *
 * Return: the length of the printed characters
 */
int print_error(char spec, flag *f)
{
	int length = 0;

	length += _putchar('%');
	if (f->space)
		length += _putchar(' ');

	length += _putchar(spec);
	return (length);
}

/**
 * validate_flag - checks the given flags
 * @flg: the given flag
 * @f: pointer to flags
 *
 * Return: 1 if there is flag, 0 other wise
 */
int validate_flag(char flg, flag *f)
{
	int i = 0;

	switch (flg)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
