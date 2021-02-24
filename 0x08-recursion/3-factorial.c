#include "holberton.h"
/**
 * factorial - prints a factorial of number
 *
 * @n: source int
 * Return: -1 if n is negative, 1 if n is zero, factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
