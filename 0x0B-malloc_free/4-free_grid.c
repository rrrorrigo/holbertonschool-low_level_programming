#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees bidimensional grid
 * @grid: te size of the memory to copy
 * @height: the char to copy
 *
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
