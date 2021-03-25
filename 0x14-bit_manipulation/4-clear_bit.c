#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the given number
 * @index: index starting from 0 of the bit I want to set
 * Return: 1 if it worked, -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sizeN, value = 1;

	sizeN = (sizeof(n) * 8);
	if (index > sizeN)
		return (-1);
	value <<= index;
	*n &= ~value;
	return (1);
}
