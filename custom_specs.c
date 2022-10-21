#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the given string
 * @f: pointer to flag
 *
 * Return: char len printed
 */
int rot13(va_list s, flag *f)
{
	int i, j, length = 0;
	char *encode0 = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char *encode1 = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
	char *str = va_arg(s, char *);

	(void)f;
	for (i = 0; str[i]; ++i)
	{
		for (j = 0; encode0[j]; ++j)
		{
			if (str[i] == encode0[j])
			{
				length += _putchar(encode1[j]);
				break;
			}
		}
	}

	return (length);
}

/**
 * rev_string - reverse a given string
 * @str: the string to be reversed
 * @f: pointer to flag
 *
 * Return: len of chars printed
 */
int rev_string(va_list str, flag *f)
{
	char *s = va_arg(str, char *);
	int i;
	int len = _strlen(s);
	int j = len - 1;
	int l = len / 2;
	char temp;

	for (i = 0; i < l; ++i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j--;
	}

	s[len] = '\0';

	return (_puts(s));
}
