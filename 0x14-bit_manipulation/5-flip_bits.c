#include "holberton.h"
/**
 * flip_bits - function that return the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip of n to get m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0;

	while (n || m)
	{
		if ((n & 1) ^ (m & 1))
			diff++;
		n >>= 1;
		m >>= 1;
	}
	return (diff);
}
