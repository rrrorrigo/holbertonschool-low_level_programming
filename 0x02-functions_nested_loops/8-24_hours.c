#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - check the code
 *
 * Return: the last digit.
 */

void jack_bauer(void)
{
	int s = 0;
	int s2 = 0;
	int m = 0;
	int m2 = 0;

	for (; s < 10; s++)
	{
		_putchar('0' + m2);
		_putchar('0' + m);
		_putchar(':');
		_putchar('0' + s2);
		_putchar('0' + s);
		_putchar('\n');
		if (s == 9)
		{
			s = 0;
			s2++;
			if (s2 == 9)
			{
				s2 = 0;
				m++;
				if (m == 9)
				{
					m = 0;
					m2++;
					if (m2 == 2 && m == 3 && s2 == 5 && s == 9)
					{
						s = 10;
		}
	}
}
