#include <stdio.h>
/**
 * main - print the file name.
 * @argc: argument of argv, is the size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = -1;

	for (; *argv != '\0'; argv++)
	{
		i++;
	}
	printf("%d\n", i);

	return (argc);
}
