#include "holberton.h"
/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	/*n: number to return */
	/*i: index for travel b*/
	/*m: multiplier of two*/
	unsigned int n = 0, m = 1;
	int i;

	if (b)
	{
		for (i = 0; b[i] != '\0'; i++)
			;
		for (i -= 1; i >= 0; i--)
		{
			if (b[i] != '1' && b[i] != '0')
				return (0);
			if (b[i] == '1')
				n += m;
			m *= 2;
		}
		return (n);
	}
	return (0);
}
