#include "main.h"

/**
 * print_S - print a hex string
 * @S: str
 * @f: flags
 *
 * Return: length of printed str
 */
int print_S(va_list S, flag *f)
{
	char *str = va_arg(S, char *);
	int length = 0, i;

	(void)f;
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; ++i)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_puts("\\x");
			length += 2;
			ch = convert(str[i], 16, 0);
			if (_strlen(ch) == 1)
			{
				length += _putchar('0');
				length += _putchar(*ch);
			}

			else
				length += _puts(ch);
		}
		else
			length += _putchar(str[i]);
	}

	return (length);
}
