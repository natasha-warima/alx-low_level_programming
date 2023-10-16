#include "main.h"
/**
 * swap_int - value of two integers swapped
 * @a: 1st integer to swap
 * @b: 2nd integer to swap
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
