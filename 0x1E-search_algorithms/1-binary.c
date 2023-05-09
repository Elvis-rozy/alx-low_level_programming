#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t before = 0;
	size_t after = size - 1;
	size_t current = 0;
	size_t a = 0;

	if (array != NULL)
	{
		while (before <= after)
		{
			current = (before + after) / 2;
			printf("Searching in array: ");
			for (a = before; a < after; a++)
			{
				printf("%d, ", array[a]);
			}
			printf("%d\n", array[a]);
			if (array[current] < value)
			{
				before = current + 1;
			}
			else if (array[current] > value)
			{
				after = current - 1;
			}
			else
			{
				return (current);
			}
		}
	}
	return (-1);
}
