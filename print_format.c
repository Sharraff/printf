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
	flag flags = {0, 0, 0};
	int length = 0;
	int i = 0;

	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				flags.hash = 0;
				flags.plus = 0;
				flags.space = 0;
				if (format[i + 1] == '\0')
					return (-1);

				i++;
				while (validate_flag(format[i], &flags))
					i++;

				if (format[i] == '%')
					length += _putchar('%');

				if (validate_spec(format[i]))
					length += print_spec(format[i], args, &flags);

				else
					length += print_error(format[i], &flags);
			}
			else
			{
				length += _putchar(format[i]);
			}

			i++;
		}
	}
	return (length);
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
