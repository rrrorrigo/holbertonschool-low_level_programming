#include "3-calc.h"
#include <stdio.h>
/**
 * main - main function
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
}
