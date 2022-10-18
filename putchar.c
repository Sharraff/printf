#include "main.h"

#define STDOUT 1
/**
 * _putchar - writes a character to the standard output
 * @c: the character to be printed
 *
 * Return: 1 if successful, -1 otherwise
 */
int _putchar(char c)
{
	return (write(STDOUT, &c, 1));
}

/**
 * _puts - prints a string on the stdout
 * @str: the string to be printed
 *
 * Return: the length of the string printed
 */
int _puts(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; str[i]; ++i)
			_putchar(str[i]);
	}

	return (i);
}

/**
 * _strlen - computes the len of str
 * @str: the str
 *
 * Return: len of str
 */
int _strlen(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; str[i]; ++i)
		{}
	}

	return (i);
}
