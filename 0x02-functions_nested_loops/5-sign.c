#include "holberton.h"

/**
 * print_sign -check the code.
 *
 * @n: external value that was check
 *
 * Return: 1 if n is > 0, return 0 if n = 0, return -1 if n < 0.
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
