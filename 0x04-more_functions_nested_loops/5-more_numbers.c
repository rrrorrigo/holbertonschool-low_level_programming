#include "holberton.h"

/**
 * more_numbers - print the numbers from 0 to 14 10 times.
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
