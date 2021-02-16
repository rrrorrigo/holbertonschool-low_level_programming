#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse.
 * @s: external value
 *
 */

void print_rev(char *s)
{
	int i;
	int length;

	for (length = 0; s[length] != 0; length++)
	{
	}

	for (i = length; i != 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
