#include "holberton.h"
#include <string.h>
/**
 * _strcat - updates the value to 98.
 * @dest: external value
 * @src: external value
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest), len2 = strlen(src);

	for (int i = 0; i < (len + len2); i++)
		dest[i + len] = src[i];
	dest[len + len2] = 0;
	return (dest);
}
