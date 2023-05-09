#include "search_algos.h"

/**
 * jump_search -  function that searches for a value in
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t down = 0;
	size_t top = 0, arr = 0;

	if (array != NULL)
	{
		while (top < size && array[top] < value)
		{
			down = top;
			top = top + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n", down, array[down]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", down, top);
		for (arr = down; arr <= top; arr++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n", arr, array[arr]);
				if (array[arr] == value)
					return (arr);
			}
		}
	}
	return (-1);
}
