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

	for (ii = 0; str[ii] !='\0'; ii++)
	{
	}
	strdup = malloc(ii);
	for (i = 0; i < ii; i++)
		strdup[i] = str[i];
	if (str == NULL || strdup == NULL)
		return (NULL);
	return (strdup);
}
