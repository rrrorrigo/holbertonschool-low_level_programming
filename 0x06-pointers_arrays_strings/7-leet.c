#include "holberton.h"

/**
 * leet - print string.
 * @s: external value
 * Return: s
 */
char *leet(char *s)
{
	char leet[] = "aAeEoOtTlL", leet2[] = "43071";
	int i = 0, ii = 0;

	for (; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 10; ii++)
		{
			if (s[i] == leet[ii])
			{
				s[i] = leet2[ii / 2];
			}
		}
	}
	return (s);
}
