#include "holberton.h"
/**
 * _abs -check the code.
 *
 * @c: external value that was check
 *
 * Return: 1 if c is lowercase or return 0 otherwise.
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = (-1) * c;

	}
	return (c);
}
