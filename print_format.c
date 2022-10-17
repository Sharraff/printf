#include "main.h"

#define NUM_OF_SPECS 2

int print_error(char prev_char, char spec);
int print_spec(char spec, va_list args);
int validate_spec(char spec);

/**
 * print_format - prints the format string to the stdout
 * @format: the format string
 * @args: the args to be formated
 *
 * Return: the length of the characters printed
 */
int print_format(const char *format, va_list args)
{
	int length = 0;
	int i = 0;

	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '\0')
					return (-1);

				if (format[++i] == ' ')
					length++;

				while (format[i] == ' ')
					i++;

				if (format[i] == '%')
					length += _putchar('%');

				else if (validate_spec(format[i]))
					length += print_spec(format[i], args);

				else
					length += print_error(format[i - 1], format[i]);
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
	char *specs = "cs";
	int i;

	for (i = 0; specs[i]; ++i)
	{
		if (specs[i] == spec)
			return (1);
	}

	return (0);
}

/**
 * print_spec - selects the appropriate function to print the given spec
 * @spec: the given specifier
 * @args: input argument to be printed
 *
 * Return: length of the characters printed
 */
int print_spec(char spec, va_list args)
{
	fmt_spec f_specs[] = {
		{'c', print_c},
		{'s', print_s}
	};
	int i;

	for (i = 0; i < NUM_OF_SPEC; ++i)
	{
		if (spec == f_specs[i].spec)
			return (f_specs[i].func(args));
	}
}

/**
 * print_error - prints the appropriate characters if the given spec is wrong
 * @prev_char: the previous char to the specifier in the format string
 * @spec: the given specifier
 *
 * Return: the length of the printed characters
 */
int print_error(char prev_char, char spec)
{
	_putchar('%');
	if (prev_char == ' ')
		_putchar(' ');

	_putchar(spec);
	return (2);
}
