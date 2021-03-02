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
int **alloc_grid(int width, int height)
{
	int **grid;
	int alto, ancho;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(width * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (alto = 0; alto <= height; alto++)
	{
		grid[alto] = malloc(height * sizeof(int));
		if (grid[alto] == NULL)
			return (NULL);
	}
	for (alto = 0; alto < height; alto++)
	{
		if (!grid[alto])
		{
			for (ancho = 0; ancho < alto; ancho++)
				free(grid[alto]);
			free(grid);
			return (NULL);
		}
	for (ancho = 0; ancho < width; ancho++)
		grid[alto][ancho] = 0;
	}
	return (grid);
}
