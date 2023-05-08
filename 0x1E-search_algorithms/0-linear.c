#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an
 * array of integers using the Linear search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @value: Value to search for in the array
 * @size: number of array elements
 *
 * Return: First index where value is located
 * or -1 if array is NULL or if value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t arr = 0;

	if (array != NULL)
	{
		for (arr = 0; arr < size; arr++)
		{
			printf("Value checked array[%lu] = [%d]\n", iarr array[arr]);
			if (array[arr] == value)
			{
				return (arr);
			}
		}
	}
	return (-1);
}
