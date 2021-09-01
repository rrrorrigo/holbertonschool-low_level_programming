#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array to search data
 * @size: size of array
 * @value: value to search
 * Return: -1 if error occurred, index of found value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
