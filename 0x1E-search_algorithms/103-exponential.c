#include "search_algos.h" 
 /** 
  * b_search - function searches for a value in sorted 
  * array using the Binary search algorithm  
  * @array: pointer to first element array to search in 
  * @low: Left index in the array 
  * @high: right index in the array 
  * @value: Value to search for in the array 
  * Return: The first index where value is located  * or -1 if value isn't found or if array is NULL  */ 
 int b_search(int *array, size_t low, size_t high, int value) 
 { 
         size_t before = low; 
         size_t after = high - 1; 
         size_t current = 0; 
         size_t a = 0; 
  
         if (array != NULL) 
         { 
                 while (before <= after) 
                 { 
                         current = (before + after) / 2; 
                         printf("Searching in array: "); 
                         for (a = before; a < after; a++) 
                         { 
                                 printf("%d, ", array[a]); 
                         } 
                         printf("%d\n", array[a]); 
                         if (array[current] < value) 
                         { 
                                 before = current + 1; 
                         } 
                         else if (array[current] > value) 
                         { 
                                 after = current - 1; 
                         } 
                         else 
                         { 
                                 return (current); 
                         } 
                 } 
         } 
         return (-1); 
 } 
 /** 
  * exponential_search - Function searches for value in a sorted array 
  * of integers using the Exponential search algorithm 
  * @array: Array is a pointer to the first element of the array to search in 
  * @size: Number of elements in array 
  * @value: Value to search for in the array 
  * Return: The first index where value is located
  * or -1 if value isn't found or if array is NULL  */ 
 int exponential_search(int *array, size_t size, int value) 
 { 
         size_t biff = 1, min = 0; 
         int result; 
  
         if (array != NULL) 
         { 
                 while (biff < size && array[biff] < value) 
                 { 
                         printf("Value checked array[%lu] = [%d]\n", biff, array[biff]); 
                         biff *= 2; 
                 } 
                 if (biff + 1 < size) 
                         min = biff + 1; 
                 else 
                         min = size; 
                 printf("Value found between indexes [%lu] and [%lu]\n", biff / 2, min - 1); 
                 result = b_search(array, biff / 2,  min, value); 
                 if (result != -1) 
                         return (result); 
         } 
         return (-1); 
 }
