#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destiny character
 * @src: source character
 * @n: number of bytes
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int contador;

	for (contador = 0; contador < n; contador++)
		dest[contador] = src[contador];
	return (dest);
}
