#include "main.h"

/**
 * sort_flags - enforce the preference of the flags
 * @flags: flags
 *
 */
void sort_flags(flag *flags)
{
	if (flags->plus)
		flags->space = 0;

	if (flags->minus || (flags->precision != -1))
		flags->zero = 0;
}

/**
 * check_width - checks for width spec
 * @flg: given char
 * @spec: width specifier
 * @f: pointer to flags
 *
 * Return: 1 if width spec, 0 otherwise
 */
int check_width(char flg, va_list spec, flag *f)
{
	int i = 0;

	if (flg == '0')
	{
		if (!f->width)
		{
			f->zero = 1;
			i = 1;
		}
		else
		{
			f->width = f->width * 10 + (flg - '0');
			i = 1;
		}
	}

	else if (flg == '*')
	{
		f->width = va_arg(spec, int);
		i = 1;
	}

	return i;
}

/**
 * validate_precision - checks if there's a precision specifier
 * @ch: given char
 * @spec: ...
 * @f: ponter to flags
 *
 * Return: 1 if precision, 0 otherwise
 */
int validate_precision(char ch, va_list spec, flag *f)
{
	if (ch == '.')
	{
		f->precision = 0;
		return (1);
	}

	if (_isdigit(ch))
	{
		f->precision = f->precision * 10 + (ch - '0');
		return (1);
	}

	if (ch == '*')
	{
		f->precision = va_arg(spec, int);
		return (1);
	}

	return (0);
}
