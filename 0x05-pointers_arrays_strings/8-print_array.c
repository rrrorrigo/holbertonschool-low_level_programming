#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print string.
 * @a: external value
 * @n: external value
 */
void print_array(int *a, int n)
{
	int i;
	if (n == 0)
		printf("%d\n", a[i]);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
}
