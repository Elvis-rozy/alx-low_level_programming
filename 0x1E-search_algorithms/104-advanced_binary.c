#include "search_algos.h" 
  
 /** 
   * adv_binary_recursive - Searches recursively 
   * @array: pointer of the subarray to search. 
   * @left: starting index. 
   * @right: ending index. 
   * @value: value to search for.
   * Return: -1, the index where the value is located. 
   */ 
 int adv_binary_recursive(int *array, size_t left, size_t right, int value) 
 { 
         size_t a; 
  
         if (right < left) 
                 return (-1); 
  
         printf("Searching in array: "); 
         for (a = left; a < right; a++) 
                 printf("%d, ", array[a]); 
         printf("%d\n", array[a]); 
  
         a = left + (right - left) / 2; 
         if (array[a] == value && (a == left || array[a - 1] != value)) 
                 return (a); 
         if (array[a] >= value) 
                 return (adv_binary_recursive(array, left, a, value)); 
         return (adv_binary_recursive(array, a + 1, right, value)); 
 } 
  
 /** 
   * advanced_binary - Searches for a value in sorted array using advanced binary search. 
   * @array: pointer first element of the array to search. 
   * @size: size of the array. 
   * @value: value to search for.
   * Return: NULL, -1, the first index where the value is located. 
   */ 
 int advanced_binary(int *array, size_t size, int value) 
 { 
         if (!array || size == 0) 
                 return (-1); 
  
         return (advanced_binary_recursive(array, 0, size - 1, value)); 
 }
