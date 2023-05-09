#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: Array is a pointer to the first element of the array to search in
 * @value: Value to search for in the array
 * @size: number of array elements
 * Return: First index where value is located
 * or -1 if array is NULL or if value is not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;
	if (array != NULL)
	{
		for (a = 0; a < size; a++)
		{
			printf("Value checked array[%lu] = [%d]\n", a array[a]);
			if (array[a] == value)
			{
				return (a);
			}
		}
	}
	return (-1);
}
