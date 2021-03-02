#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return bidimentional array
 * @width: width of array
 * @height: height of array
 *
 * Return: array of int.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int alto, ancho;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(width * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (alto = 0; alto < height; alto++)
	{
		grid[alto] = (int *)malloc(height * sizeof(int));
		if (!grid[alto])
		{
			for (ancho = 0; ancho < alto; ancho++)
				free(grid[ancho]);
			free(grid);
			return (NULL);
		}
	for (ancho = 0; ancho < width; ancho++)
		grid[alto][ancho] = 0;
	}
	return (grid);
}
