#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value
 * in sorted array using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * or -1 if value isn't found or if array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t down = 0;
	size_t top = size - 1;
	size_t post = 0;

	if (array != NULL)
	{
		while ((array[top] != array[down]) &&
		       (value >= array[down]) &&
		       (value <= array[top]))
		{
			post = down + (((double)(top - down) / (array[top] - array[down]))
					* (value - array[down]));
			printf("Value checked array[%lu] = [%d]\n", post, array[post]);
			if (array[post] < value)
				down = post + 1;
			else if (value < array[post])
				top = post - 1;
			else
				return (post);
		}
		if (value == array[down])
			return (down);
		post = down + (((double)(top - down) / (array[top] - array[down])) *
				(value - array[down]));
		printf("Value checked array[%lu] is out of range\n", post);
	}
	return (-1);
}
