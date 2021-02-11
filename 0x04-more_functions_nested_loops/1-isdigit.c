#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit -check the code.
 *
 * @c: external value that was check
 *
 * Return: 1 if c is digit or return 0 otherwise.
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}

	return (0);
}
