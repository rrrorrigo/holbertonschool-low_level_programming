#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * generate  random number and print the last digit
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int i = n % 10;

	char a[15] = "Last digit of";

	char b[30] = "and is less than 6 and not 0";

	if (i == 0)
	{
		printf("%s %d is %d and is 0\n", a, n, i);
	}
	else
	{
		if (i < 6)
		{
			printf("%s %d is %d %s\n", a, n, i, b);
		}
		else
		{
			printf("%s %d is %d and is greater than 5\n", a, n, i);
		}
	}
	return (0);
}
