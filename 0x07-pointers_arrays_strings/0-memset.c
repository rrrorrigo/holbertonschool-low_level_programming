#include "holberton.h"
/**
 * _memset - fill memory with a constant byte
 * @s: external value
 * @b: external value
 * @n: external value
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int contador;

	for (contador = 0; contador < n; contador++)
	{
		s[contador] = b;
	}
	return (s);
}
