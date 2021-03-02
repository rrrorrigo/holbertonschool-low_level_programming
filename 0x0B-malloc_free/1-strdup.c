#include "holberton.h"
#include <string.h>
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
	unsigned int i;

	strdup = malloc(strlen(str));
	for (i = 0; i < strlen(str); i++)
		strdup[i] = str[i];
	if (str == NULL || strdup == NULL)
		return (NULL);
	return (strdup);
}
