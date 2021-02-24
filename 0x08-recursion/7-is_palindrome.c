#include "holberton.h"
#include "2-strlen_recursion.c"
/**
 * is_palindrome - check if the string is palindrome
 *
 * @s: source string
 */
int is_PalRec(char *str, int s, int e)
{

	// If there is only one character
	if (s == e)
		return (1);

	// If first and last
	// characters do not match
	if (str[s] != str[e])
		return (0);

	// If there are more than
	// two characters, check if
	// middle substring is also
	// palindrome or not.
	if (s < e + 1)
		return (is_PalRec(str, s + 1, e - 1));

	return (1);
}

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	// An empty string is
	// considered as palindrome
	if (n == 0)
		return (1);

	return (is_PalRec(s, 0, n - 1));
}
