#include "holberton.h"

/**
 * print_numbers - print number.
 *
 * Description: the function print_alphabet print the number from 0 to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');

}
