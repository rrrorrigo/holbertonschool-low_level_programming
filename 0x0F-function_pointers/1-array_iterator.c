#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that execute a function
 * @array: element to print in the action function
 * @size: size of array
 * @action: name of function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
