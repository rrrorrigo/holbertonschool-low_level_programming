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
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size);

	if (s == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
