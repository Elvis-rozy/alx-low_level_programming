#include "search_algos.h"
/*
 * linear_search - Function searches
 * array of integers using the Linear
 * search algorithm
 * @array: pointer to the first element
 * @value: Value to search for in the array
 * @size: number of array elements
 * Return: First index where value is
 * or -1 if array is NULL
 * or value is not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;
	if (array != NULL)
	{
		for (a = 0; a < size; a++)
		{
			printf("Value checked array[%lu] = [%d]\n", a, array[a]);
			if (array[a] == value)
			{
				return (a);
			}
		}
	}
	return (-1);
}
