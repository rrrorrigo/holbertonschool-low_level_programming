#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse.
 * @s: external value
 *
 */

void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
