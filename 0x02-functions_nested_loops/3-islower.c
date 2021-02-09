#include <ctype.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _islower -check the code.
 *
 * @c: external value that was check
 *
 * Return: 1 if c is lowercase or return 0 otherwise.
 */

int _islower(int c)
{
	islower(c);

	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
