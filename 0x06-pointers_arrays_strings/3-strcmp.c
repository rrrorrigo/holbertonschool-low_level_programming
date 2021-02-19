#include "holberton.h"

/**
 * _strcmp - a.
 *
 * @s1: external value
 * @s2: external value
 *
 *Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return(*s1 - *s2);
	else
		return (0);
}
