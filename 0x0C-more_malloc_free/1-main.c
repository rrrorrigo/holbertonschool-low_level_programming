#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat, *concat2, *concat3;

	concat = string_nconcat("Holberton ", "School !!!", 6);
	concat2 = string_nconcat("si ", "noooooooooo", 3);
	concat3 = string_nconcat("", "", 5);
	printf("%s\n", concat);
	printf("%s\n", concat2);
	printf("%s\n", concat3);
	free(concat);
	free(concat2);
	free(concat3);
	return (0);
}
