#include "holberton.h"
/**
 * get_endianness - function that check the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;

	if (*(char *)&x)
		return (1);
	else
		return (0);
}
