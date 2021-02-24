#include "holberton.h"
/**
 * _pow_recursion - print the power of x raised by y
 *
 * @x: source int
 * @y: source int
 * Return: the power of x raised by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
