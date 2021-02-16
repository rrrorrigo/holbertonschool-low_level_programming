#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - print string.
 * @str: external value
 *
 */

void puts_half(char *str)
{
	int mitad;
	int length;

	for (length = 0; str[length] != 0; length++)
	{
	}

	if ((*str % 2) == 0)
	{
		mitad = length / 2;
	}
	else
	{
		mitad = (length - 1) / 2;
	}

	for (int i = mitad; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
