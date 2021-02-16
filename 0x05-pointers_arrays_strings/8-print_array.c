#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print string.
 * @a: external value
 * @n: external value
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf("%d, ", a[i]);
	}
	printf("\n");
}
