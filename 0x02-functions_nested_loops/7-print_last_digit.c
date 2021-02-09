#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - check the code.
 *
 * @c: external value that was check
 *
 * Return: the last digit.
 */

int print_last_digit(int c)
{
	int ld;

	if (c < 0)
	{
		c = (-1) * c;
	}

	ld = c % 10;
	_putchar('0' + ld);

	return (ld);
}
