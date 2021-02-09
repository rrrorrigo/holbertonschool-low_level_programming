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

	ld = c % 10;

	if (c < 0)
	{
		ld = (-1) * ld;
	}

	_putchar('0' + ld);

	return (ld);
}
