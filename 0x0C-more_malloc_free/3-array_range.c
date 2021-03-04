#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create anarray of integers
 * @min: start value of array
 * @max: end value of array
 *
 * Return: array of integers.
 */
int *array_range(int min, int max)
{
	int contador, i;
	int *array;

	if (min > max)
		return (NULL);
	for (contador = 0; contador <= (max - min); contador++)
		;
	array = malloc(contador * sizeof(int));
	if (!array)
		return (NULL);
	for (i = 0; i <= contador; i++, min++)
		array[i] = min;
	return (array);
}
