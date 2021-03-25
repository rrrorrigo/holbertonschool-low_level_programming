#include "holberton.h"
/**
 * get_bit - function that return the value of a bit at a given index
 * @n: decimal to get a bit at a given index
 * @index: is the index, starting from 0.
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int sizeN;

	sizeN = (sizeof(n) * 8);
	if (index > sizeN)
		return (-1);
	while (index--)
		n >>= 1;
	return (n & 1);
}
