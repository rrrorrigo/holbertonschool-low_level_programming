#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 * main - print the addition of postive numbers.
 * @argc: argument of argv, is the size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: 1 Error, 0 Success.
 */
int main(int argc, char *argv[])
{
	int i = 0, ii = 0, addition = 0;

	if (argc == 1)
	{
		printf("%d\n", addition);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (; argv[i][ii]; ii++)
			if (isdigit(argv[i][ii]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		addition += atoi(argv[i]);
	}
	printf("%d\n", addition);
	return (0);
}
