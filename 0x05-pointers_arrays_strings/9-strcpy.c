#include "holberton.h"

/**
 * _strcpy - print string.
 * @dest: external value
 * @src: external value.
 * Return: array of char.
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int contador;

	for (length = 0; src[length] != 0; length++)
	{
	}

	for (contador = 0; contador < length; contador++)
	{
		dest[contador] = src[contador];
	}
	return (dest);
}
