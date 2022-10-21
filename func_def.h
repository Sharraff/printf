#ifndef FUNC_DEF_H
#define FUNC_DEF_H

#include "main.h"

/**
 * non_custom_spec - identifies a non-custom spec
 * @spec: the spec
 *
 * Return: 1 if non-custom spec, 0 otherwise
 */
int non_custom_spec(char spec)
{
	const char *str = "diuoxX";

	while (*str)
	{
		if (*str == spec)
			return (1);

		str++;
	}

	return (0);
}

/**
 * check_len_mod - checks the value of len modifier
 * @integer: the number
 * @f: pointer to flags
 *
 * Return: number
 */
unsigned long int check_len_mod(va_list integer, flag *f)
{
	unsigned long int n;

	if (f->h)
		n = va_arg(integer, unsigned int);
	else
		n = va_arg(integer, unsigned long int);

	return (n);
}

#endif
