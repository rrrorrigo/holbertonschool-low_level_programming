#include "holberton.h"
#define NULL ((void *)0)
/**
 * _strchr - function that copies memory area
 * @s: destiny character
 * @c: source character
 *
 * Return: the first occurence of the character c in the string s, or null.
 */
char *_strchr(char *s, char c)
{
	while ((*s != '\0') && *s != c)
		s++;
	if (*s != '\0' && *s == c)
		return (s);
	return (NULL);
}
