#include "holberton.h"

/**
 * _strcat - updates the value to 98.
 * @dest: external value
 * @src: external value
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len, len2;
	char *a;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (; src[len2] != '\0'; len++, len2++)
		dest[len] = src[len2];
	dest[len + len2] = '\0';
	a = dest;
	return (a);
}
