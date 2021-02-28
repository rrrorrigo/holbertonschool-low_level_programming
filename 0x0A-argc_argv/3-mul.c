#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - print the multiplication of two integers.
 * @argc: argument of argv, is the size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: 0 succes, 1 error.
 */
int main(int argc, char *argv[])
{
	int mul1, mul2;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);

	printf("%d\n", (mul1 * mul2));
	return (0);
}
