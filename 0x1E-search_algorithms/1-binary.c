#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Print the current state of the array being searched
 * @array: Points to the first element of the array being searched
 * @left: The left-most element in @array
 * @right: The right-most element in @array
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", *(array + left));
		if (left != right)
			printf(", ");
		left = left + 1;
	}
	printf("\n");
}

/**
 * binary_search - Searches a val in a sorted int arr of using Binary search
 * @array: Points to the first element of the array to search
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index of @value. -1 if @array is NULL or @value not in @array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, mid, right = size - 1;

	if (array != NULL)
	{
		while (left <= right)
		{
			print_array(array, left, right);
			mid = (left + right) / 2;
			if (*(array + mid) < value)
				left = mid + 1;
			else if (*(array + mid) > value)
				right = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
