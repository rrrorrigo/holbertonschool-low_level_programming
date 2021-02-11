#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 *
 */

void more_numbers(void)
{
	int i = 0;
	int ii = 0;

	for (; i <= 9; i++)
	{
		for (; ii <= 14; ii++)
		{
			if (ii > 9)
				_putchar('0' + (ii / 10));
			_putchar('0' + (ii % 10));
		}
		ii = 0;
		_putchar('\n');
	}
}
