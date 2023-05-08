#include "search_algos.h" 
  
 /** 
  * jump_search -  function searches for value in 
  * sorted array of integers using the Jump search algorithm
  * @array: Array is pointer to first element of array to search in 
  * @size: Number of elements in array 
  * @value: Value to search for in the array
  * Return: The first index where value is located
  * or -1 if value is not found or if array is NULL 
  */ 
 int jump_search(int *array, size_t size, int value) 
 { 
         size_t down = 0; 
         size_t top = 0, a = 0; 
  
         if (array != NULL) 
         { 
                 while (top < size && array[top] < value) 
                 { 
                         down = top; 
                         top = top + sqrt(size); 
                         printf("Value checked array[%lu] = [%d]\n", 
                                down, array[down]); 
                 } 
                 printf("Value found between indexes [%lu] and [%lu]\n", 
                        down, top); 
                 for (a = down; a <= top; a++) 
                 { 
                         if (a < size) 
                         { 
                                 printf("Value checked array[%lu] = [%d]\n", 
                                        a, array[a]); 
                                 if (array[a] == value) 
                                         return (a); 
                         } 
                 } 
         } 
         return (-1); 
 }
