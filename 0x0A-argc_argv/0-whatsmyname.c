#include <stdio.h>
/**
 * main - print the file name.
 * @argc: argument of argv, is the size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
