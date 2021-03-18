#include "holberton.h"
/**
 * is_prime_number - return if the input integer is a prime number
 *
 * @n: source int
 * Return: 1 if is a primer number, otherwise return 0
 */
int is_prime_number(int n)
{
	if ((n / 2) < 2)
		return (0);
	if (n % (n / 2))
		return (1);
	else
		return (is_prime_number(n / 2));
}
