#include "holberton.h"

/**
 * _strncat - a.
 *
 * @dest: external value
 * @src: external value
 * @n: external value
 *Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len2, contador;
	char *a;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
	}
	if (n > len2)
		n = len2;
	for (contador = 0; contador < n; len++, contador++)
		dest[len] = src[contador];
	a = dest;
	return (a);
}
