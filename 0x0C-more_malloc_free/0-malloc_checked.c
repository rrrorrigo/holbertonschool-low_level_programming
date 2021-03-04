#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @size: te size of the memory to copy
 * @c: the char to copy
 *
 * Return: char.
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
