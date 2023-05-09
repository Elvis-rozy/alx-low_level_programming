#include "search_algos.h"

/**
 * linear_search - Function searches for a value in an
 * array of using the Linear search algorithm
 *
 * @array: pointer to the first element of array
 * @size: Number of array elements
 * @value: Value to search for
 *
 * Return: The index where value is located
 * or -1 if value is not found or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t arr = 0;

	if (array != NULL)
	{
		for (arr = 0; arr < size; arr++)
		{
			printf("Value checked array[%lu] = [%d]\n", arr, array[arr]);
			if (array[arr] == value)
			{
				return (arr);
			}
		}
	}
	return (-1);
}

