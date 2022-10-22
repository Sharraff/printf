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
}
