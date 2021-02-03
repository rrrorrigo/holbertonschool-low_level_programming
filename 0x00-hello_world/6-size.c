#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%lu char\n", sizeof(char));
	printf("%lu int\n", sizeof(int));
	printf("%lu long\n", sizeof(long));
	printf("%lu double\n", sizeof(double));
	printf("%lu float\n", sizeof(float));
	return (0);
}
