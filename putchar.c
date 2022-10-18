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
	static int i;
	static char buffer[1024];

	if (c == -1 || i == 1024)
	{
		write(STDOUT, &buffer, i);
		i = 0;
	}

	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}

	return (1);
}
