#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - print string.
 * @s: external value
 *
 */

void rev_string(char *s)
{
	int i;
	int ii;
	int extra;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	for (ii = 0; ii <= i; ii++, i--)
	{
		extra = s[ii];
		s[ii] = s[i];
		s[i] = extra;
	}
}
