#include "holberton.h"
#include <stdio.h>
/**
 * set_string - set the value of a pointer to char.
 * @a: external value
 * @size: external value
 *
 */
void print_diagsums(int *a, int size)
{
	int sum, sum2;

	for (int i = 0; i / size; i = i / size)
		sum = a[0] + a[size + 1];
	for (int i = size; i < size; i++)
		sum2 = a[i] + a[size - i - 1];
	printf("%d, %d\n", sum, sum2);
}
