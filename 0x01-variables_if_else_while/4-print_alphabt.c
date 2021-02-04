#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * print alphabet without e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
	{
		if !(ch == 'e' || ch == 'q')
		{
		putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
