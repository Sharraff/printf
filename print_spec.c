#include "main.c"

/**
 * print_spec - prints a spec
 * @args: input argument to be printed
 * @f: pointer to the flag given
 * Return: length of the characters printed
 */
int print_spec(char spec, va_list args, flag *f)
{
        fmt_spec f_specs[] = {
                {'c', print_c},
		{'s', print_s},
                {'d', print_int},
                {'i', print_int}
        };
        int i, length;

        for (i = 0; i < NUM_OF_SPECS; ++i)
        {
 	        if (spec == f_specs[i].spec)
                        length = f_specs[i].func(args, f);
        }

        return (length);
}
