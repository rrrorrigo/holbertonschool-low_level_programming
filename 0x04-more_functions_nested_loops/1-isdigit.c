#include "holberton.h"

/**
 * _isdigit -check the code.
 *
 * @c: external value that was check
 *
 * Return: 1 if c is digit or return 0 otherwise.
 */

int _isdigit(int c)
{
	int x = 0;

	for (; x <= '9'; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
