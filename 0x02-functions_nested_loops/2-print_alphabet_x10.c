#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 *
 */

void print_alphabet_x10(void)
{
	char x = 'a';
	int i = 0;

	for (; i <= 10; i++)
	{
		for (; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}
}
