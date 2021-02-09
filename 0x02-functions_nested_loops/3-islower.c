#include <ctype.h>
#include "holberton.h"

/**
 * _islower -check the code.
 *
 * @c: external value that was check
 *
 * Return: 1 if c is lowercase or return 0 otherwise.
 */

int _islower(int c)
{
	char x = 'a';

	for (; x <= 'z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	return (0);
}
