#include "holberton.h"

/**
 * print_line - check the code.
 *
 * @n: external value that was check
 *
 * Description: Print a line.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
