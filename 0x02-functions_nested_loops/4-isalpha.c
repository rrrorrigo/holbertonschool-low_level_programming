#include "holberton.h"

/**
 * _isalpha -check the code.
 *
 * @c: external value that was check
 *
 * Return: 1 is letter or return 0 otherwise.
 */

int _isalpha(int c)
{
	char x = 'a';
	char X = 'A';

	for (; x <= 'z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	for (; X <= 'Z'; X++)
	{
		if (c == X)
		{
			return (1);
		}
	}
	return (0);

}
