#include "3-calc.h"

/**
 * main - main function
 * @argv: pointer of arguments value
 * @argc: integer of arguments counter
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int res;
	int (*operation)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	res = operation(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
