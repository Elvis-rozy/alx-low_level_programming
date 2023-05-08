#include "search_algos.h" 
  
 /** 
  * interpolation_search - function searches for a value in sorted array 
  * of integers using the Interpolation search algorithm. 
  * @array: pointer to the first element of the array to search in 
  * @size: Number of elements in array 
  * @value: Value to search for in the array
  * Return: The first index where value is located  * or -1 if value isn't found or if array is NULL  */ 
 int interpolation_search(int *array, size_t size, int value) 
 { 
         size_t down = 0; 
         size_t top = size - 1; 
         size_t position = 0; 
  
         if (array != NULL) 
         { 
                 while ((array[top] != array[down]) && 
                        (value >= array[down]) && 
                        (value <= array[top])) 
                 { 
                         pos = down + (((double)(top - down) / (array[top] - array[down])) * 
                                      (value - array[down])); 
                         printf("Value checked array[%lu] = [%d]\n", position, array[position]); 
                         if (array[position] < value) 
                                 down = position + 1; 
                         else if (value < array[position]) 
                                 top = position - 1; 
                         else 
                                 return (position); 
                 } 
                 if (value == array[down]) 
                         return (down); 
                 position = down + (((double)(top - down) / (array[top] - array[down])) 
                              * (value - array[down])); 
                 printf("Value checked array[%lu] is out of range\n", position); 
         } 
         return (-1); 
 }
