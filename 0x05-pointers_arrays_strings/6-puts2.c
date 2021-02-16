#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - print string.
 * @str: external value
 *
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
	{
	}
	for (int i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
