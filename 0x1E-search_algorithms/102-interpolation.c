#include <stdio.h>

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	size_t low = 0;
	size_t high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		 size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		 printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		 if (array[pos] == value)
			 return pos;

		 if (array[pos] < value)
			 low = pos + 1;
		 else
			 high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", high);
	return -1;
}
