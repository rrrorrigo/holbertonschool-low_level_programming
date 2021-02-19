#include "holberton.h"

/**
 * _strcat - updates the value to 98.
 * @dest: external value
 * @src: external value
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len, len2;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
	}
	for (i = 0; i <= (len + len2); i++)
		dest[i + len] = src[i];
	dest[len + len2] = '\0';
	char *a = dest;

	return (a);
}
