#include "holberton.h"

/**
 * swap_int - swap the value of two integers.
 * @a: external value
 * @b: external value
 *
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
