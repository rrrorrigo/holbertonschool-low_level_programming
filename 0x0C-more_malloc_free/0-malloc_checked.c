#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: te size of the memory to allocate
 *
 * Return: void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *a = (void *)malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
