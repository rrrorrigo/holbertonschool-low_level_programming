#include "holberton.h"
/**
 *reverse_array - print string.
 * @a: external value
 * @n: external value
 */
void reverse_array(int *a, int n)
{
	int ii;
	int extra;

	n--;
	for (ii = 0; ii <= n; ii++, n--)
	{
		extra = a[ii];
		a[ii] = a[n];
		a[n] = extra;
	}
}
