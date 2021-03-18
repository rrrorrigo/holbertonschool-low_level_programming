#include "holberton.h"
/**
 * _sqrt_recursion - prints a square root of number
 *
 * @n: source int
 * Return: square root of a number, -1 if n doesnt have
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (_sqrt_recursion(n - 1) + 2 * n - 1);
}
