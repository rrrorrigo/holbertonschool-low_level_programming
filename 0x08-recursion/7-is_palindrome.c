#include "holberton.h"
#include "2-strlen_recursion.c"
/**
 * is_palindrome - check if the string is palindrome
 *
 * @s: source string
 */
int is_PalRec(char *str, int s, int e)
{
	if (s == e)
		return (1);

	if (str[s] != str[e])
		return (0);

	if (s < e + 1)
		return (is_PalRec(str, s + 1, e - 1));

	return (1);
}

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);
	return (is_PalRec(s, 0, n - 1));
}
