#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int ii = 0;

	while (ii <= 9)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar('0' + (i * ii));
			_putchar(',');
			_putchar(' ');
			if (ii == 0)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		ii++;
	}
}
