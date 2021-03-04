#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two string
 * @s1: string one
 * @s2: string two
 * @n: byte to concatenate by string two to string one
 * Return: concatenate string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stringcat;
	unsigned int largoS1, largoS2, i, ii;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (largoS2 = 0; s2[largoS2] != '\0'; largoS2++)
		;
	if (n >= largoS2)
		n = largoS2 + 1;
	for (largoS1 = 0; s1[largoS1] != '\0'; largoS1++)
		;
	stringcat = malloc(sizeof(char) * (largoS1 + n));
	if (!stringcat)
		return (NULL);
	for (i = 0; i < largoS1; i++)
		stringcat[i] = s1[i];
	for (ii = 0; ii < n; ii++)
		stringcat[i + ii] = s2[ii];
	stringcat[i + ii] = '\0';
	return (stringcat);
}
