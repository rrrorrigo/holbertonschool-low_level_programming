#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	int ii = 0;

	for (; ii <= 9; ii++)
	{
		for (; i <= 9; i++)
		{
			putchar('0' + ii);
			putchar('0' + i);
			if ((ii == 9) && (i == 9))
			{

			}
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
		i = 0;
	}
	putchar('\n');

	return (0);
}
