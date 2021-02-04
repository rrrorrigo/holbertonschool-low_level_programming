#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	char ch2 = 'a';

	for (ch = 0; ch <= 15; ch++)
	{
		if (ch <= 9)
		{
			putchar('0' + ch);
		}
		else
		{
			while (ch2 <= 'f')
			{
				putchar(ch2);
				ch2++;
			}
		}
	}
	putchar('\n');

	return (0);
}
