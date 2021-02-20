#include "holberton.h"

/**
 * rot13 - print string.
 * @s: external value
 * Return: s
 */
char *rot13(char *s)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, ii = 0;

	for (; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 52; ii++)
		{
			if (s[i] == alph[ii])
			{
				s[i] = rot13[ii];
				break;
			}
		}
	}
	return (s);
}
