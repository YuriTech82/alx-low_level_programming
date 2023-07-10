#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a val in an int arr using Linear search algo
 * @array: Points to the first element of the array to search
 * @size: Number of elements in @array
 * @value: Value to search
 *
 * Return: Index of @value; -1 if @value not in @array or @array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
