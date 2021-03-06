#include "holberton.h"

/**
 * _strncpy - a.
 *
 * @dest: external value
 * @src: external value
 * @n: external value
 *Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *a;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	a = dest;
	return (a);
}
