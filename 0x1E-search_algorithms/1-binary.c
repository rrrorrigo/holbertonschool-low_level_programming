#include "search_algos.h"
/**
 * print - function to print array
 * @array: array to print
 * @size: size of array
 */
void print(int *array, size_t i, size_t size)
{
        printf("Searching in array: ");
        for (; i < size + 1; i++)
        {
                printf("%u", array[i]);
                if (i < size)
                        printf(", ");
        }
        putchar('\n');
}
/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: array to search a value
 * @size: size of array
 * @value: value to search on array
 * 
 */
int binary_search(int *array, size_t size, int value)
{
        size_t i = 0, M;

        size = size - 1;
        for (; i <= size;)
        {
                print(array, i, size);
                M = (i + size) / 2;
                if (array[M] == value)
                        return (M);
                if (array[M] < value)
                        i = M + 1;
                if (array[M] > value)
                        size = M - 1;
        }
        return (-1);
}