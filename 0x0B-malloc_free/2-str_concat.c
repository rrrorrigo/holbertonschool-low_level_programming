#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function tht concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *strcat;

	for (; s1[len1] != '\0'; len1++)
	{
	}
	for (; s2[len2] != '\0'; len2++)
	{
	}
	strcat = malloc(sizeof(char) * (len1 + len2));
	if (!strcat || !s1 || !s2)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		strcat[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		strcat[len1 + i] = s2[i];
	strcat[len1 + len2] = '\0';
	return (strcat);
}
