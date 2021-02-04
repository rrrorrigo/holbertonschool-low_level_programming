#include <stdio.h>
/**
 * main - Entry point
 * print the alphabet with for and putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
