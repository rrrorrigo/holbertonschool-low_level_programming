#include "holberton.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to the given number
 * @index: index startin from 0 of the bit I want to get
 * Return: 1 if it worked or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sizeN, value = 1;

	sizeN = (sizeof(n) * 8);
	if (index > sizeN)
		return (-1);
	value <<= index;
	*n = *n | value;
	return (1);
}
