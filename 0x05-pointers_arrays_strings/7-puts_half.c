#include "holberton.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * puts_half - print string.
 * @str: external value
 *
 */

void puts_half(char *str)
{
	int mitad;

	if ((*str % 2) == 0)
	{
		mitad = _strlen(str) / 2;
	}
	else
	{
		mitad = (_strlen(str) - 1) / 2;
	}
for (; mitad < _strlen(str); mitad++)
	{
		_putchar(str[mitad]);
	}
	_putchar('\n');
}
