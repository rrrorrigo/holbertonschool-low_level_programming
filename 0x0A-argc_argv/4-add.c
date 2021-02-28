#include <stdlib.h>
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
	int i = 1, addition = 0;

	if (argc == 1)
	{
		printf("%d\n", addition);
		return (0);
	}

	for (; i < argc; i++)
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			addition += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	printf("%d\n", addition);
	return (0);
}
