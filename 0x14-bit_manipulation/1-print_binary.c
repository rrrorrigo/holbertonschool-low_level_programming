#include "holberton.h"
/**
 * aux - aux func to made recursion
 * @n: number to convert.
 */
void aux(unsigned long int n)
{
	if (n)
	{
		aux(n >> 1);
		_putchar((n & 1) + '0');
	}
}
/**
 * print_binary - print a binary representation of a number
 * @n: number to convert.
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		aux(n);
	}
	else
	_putchar('0');
}
