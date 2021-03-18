#include "holberton.h"

/**
 * puts2 - print string.
 * @str: external value
 *
 */

void puts2(char *str)
{
	int length;
	int i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
