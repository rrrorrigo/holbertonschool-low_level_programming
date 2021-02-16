#include "holberton.h"

/**
 * reset_to_98 - updates the value to 98.
 * @a: external value
 * @b: external value
 *
 */

void swap_int(int *a, int *b)
{
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}
