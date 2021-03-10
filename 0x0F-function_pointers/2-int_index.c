#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that search an int
 * @array: element to print in the cmp function
 * @size: size of array
 * @cmp: name of function
 * Return: int of index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	else
		return (-1);
}
