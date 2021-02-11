#include "holberton.h"
#include <stdio.h>

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
			for (; ii > (i + 1); ii--)
			{
				_putchar(32);
			}
			int iii = (size - i);

			for (; iii <= size; iii++)
			{
				_putchar(35);
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
