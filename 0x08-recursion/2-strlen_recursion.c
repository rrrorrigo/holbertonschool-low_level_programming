#include "holberton.h"
/**
 * _strlen_recursion - return the length of a string
 *
 * @s: source string
 * Return: 0 if s is void or the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
