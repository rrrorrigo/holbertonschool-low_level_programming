#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of bytes to allocate
 * @size: sizeof type of variable.
 *
 * Return: char.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocmem;

	allocmem = malloc(nmemb * size);
	if (!allocmem || nmemb == 0 || size == 0)
		return (NULL);
	return (allocmem);
}
