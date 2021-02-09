#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code.
 *
 * @n: external value that was check
 *
 * Return: the last digit.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
}
