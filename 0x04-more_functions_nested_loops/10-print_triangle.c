#include "holberton.h"

/**
 * print_triangle - check the code.
 *
 * @size: external value that was check
 *
 * Description: Print a diagonal line.
 */
void print_triangle(int size)
{
	int i = 0;
	int ii = size;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (; ii > i; ii--)
			{
				_putchar(' ');
			}
			int iii = size - i;

			for (; iii <= size; iii++)
			{
				_putchar('#');
			}
			_putchar('\n');
			ii = size;
		}
	}
	else
	{
		_putchar('\n');
	}
}
