#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check if the value is uppercase letter.
 *
 * Description: si
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
