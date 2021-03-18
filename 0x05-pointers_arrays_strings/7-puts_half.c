#include "holberton.h"

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
		mitad = length - (length / 2);
	}
	else
	{
		mitad = length - ((length - 1) / 2);
	}
	for (; mitad < length; mitad++)
		_putchar(str[mitad]);
	_putchar('\n');
}
