#include "main.h"

/**
 * initialize_flag - sets flags to initial values
 * @f: pointer to flag
 *
 */
void initialize_flag(flag *f)
{
	f->l = 0;
	f->h = 0;
	f->space = 0;
	f->plus = 0;
	f->hash = 0;
	f->minus = 0;
	f->width = 0;
	f->precision = -1;
	f->zero = 0;
}

/**
 * _isdigit - checks if a char is a digit
 * @ch: the characer
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);

	return (0);
}

/**
 * print_width - handles the width specifier from the str format
 * @str: str to modify
 * @f: pointer to flags
 *
 * Return: Modified str
 */
char *print_width(char *str, flag *f)
{
	char *s = str;

	if (f->precision != -1)
	{
		int i, len = _strlen(str);
		char *pad = " ";

		if (len < f->width)
		{
			if (f->zero)
				pad = "0";

			for (i = len; i < f->width; ++i)
			{
				if (f->minus)
					s = str_concat(s, pad);
				else
					s = str_concat(pad, s);
			}
		}
	}

	return (s);
}

/**
 * print_precision - handles precision specifier of the format string
 * @str: str to be modified
 * @f: pointer to flags
 * @negative: flag for negative number
 *
 * Return: pointer to the modified str
 */
char *print_precision(char *str, flag *f, int negative)
{
	int i, len = _strlen(str);
	char *s = str;

	if (len < f->precision)
	{
		for (i = len; i < f->precision; ++i)
			s = str_concat("0", s);

	}

	if (negative)
		s = str_concat("-", s);

	if (f->plus && !negative)
		s = str_concat("+", s);

	if (f->width > f->precision)
	{
		for (i = f->precision; i < f->width; ++i)
		{
			if (f->minus)
				s = str_concat(s, " ");
			else
				s = str_concat(" ", s);
		}
	}

	return (s);
}
