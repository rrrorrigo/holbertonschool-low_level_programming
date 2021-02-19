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
	int i = 0, len, len2;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (*s1 - *s2);
		}
		i++;
	}
	return (0);
}
