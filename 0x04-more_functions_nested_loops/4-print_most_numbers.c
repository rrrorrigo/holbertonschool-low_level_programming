#include "holberton.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4.
 *
 * Description: the function print_most_numbers print numbers
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
		{
		}
		else
		{
			_putchar('0' + a);
		}
	}
	_putchar('\n');
}
