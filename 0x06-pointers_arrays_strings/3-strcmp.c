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

	for (len = 0; s1[len] != '\0'; len++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i] && len > len2)
		{
			return (15);
		}
		else if (s1[i] != s2[i] && len2 > len)
		{
			return (-15);
		}
		else if (s1[i] != s2[i] && len == len2)
		{
			return (0);
		}
		i++;
	}
	return (0);
}
