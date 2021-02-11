#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check if the value is uppercase letter.
 *
 * @c: external value
 *
 * Return: 1 if is upper or 0 if is otherwise
 */

int _isupper(int c)
{
	char x = 'A';

	for (; x <= 'Z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}

	return (0);
}
