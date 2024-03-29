#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * @array: array to search data
 * @size: size of array
 * @value: value to search
 * Return: -1 if error occurred, index of found value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
