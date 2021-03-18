#include "holberton.h"
/**
 * _strspn - function that copies memory area
 * @s: destiny character
 * @accept: source character
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, ii = 0, bytes = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; *(accept + ii) != '\0'; ii++)
		{
			if (s[i] == accept[ii])
			{
				bytes++;
				i++;
			}
			if (s[i] != accept[ii] && accept[ii] == '\0')
				break;
		}
		ii = 0;
	}
	return (bytes);
}
