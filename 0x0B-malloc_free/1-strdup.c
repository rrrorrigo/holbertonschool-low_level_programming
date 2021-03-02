#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string a copiar
 *
 * Return: pointer of the duplicated string.
 */
char *_strdup(char *str)
{
	char *strdup;
	int i, ii;

	if (str == NULL)
		return (NULL);
	for (ii = 0; str[ii] != '\0'; ii++)
	{
	}
	strdup = malloc(ii);
	if (strdup == NULL)
		return (NULL);
	for (i = 0; i < ii; i++)
		strdup[i] = str[i];
	return (strdup);
}
