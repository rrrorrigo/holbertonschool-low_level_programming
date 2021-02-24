#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: source string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	++s;
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar(10);
}
