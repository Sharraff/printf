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
}
