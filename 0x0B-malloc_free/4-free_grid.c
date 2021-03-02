#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @size: te size of the memory to copy
 * @c: the char to copy
 *
 * Return: char.
 */
void free_grid(int **grid, int height)
{
	int Row = 0;
	for (Row =0; Row < height; Row++)
	{
		free(grid[Row]);
	}
	free(grid);
}
