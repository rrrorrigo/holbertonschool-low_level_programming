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
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	allocmem = malloc(nmemb * size);
	if (!allocmem)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		allocmem[i] = 0;
	return (allocmem);
}
