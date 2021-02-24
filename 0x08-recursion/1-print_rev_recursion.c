#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line
 *
 * @s: source string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	_putchar(*s);
	s--;
	if (*s != s[0])
		_print_rev_recursion(s);
}
