#include "holberton.h"

/**
 * print_square - check the code.
 *
 * @size: external value that was check
 *
 * Description: Print a square.
 */

void print_square(int size)
{
	int i = 0;
	int ii = 0;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (; ii < size; ii++)
			{
			_putchar('#');
			}
			_putchar('\n');
			ii = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
