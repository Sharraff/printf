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
