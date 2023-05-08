#include "search_algos.h" 
  
 /** 
  * linear_skip - Function searches for an algorithm in sorted singly 
  * linked list of integers using linear skip. 
  * @list: pointer to the start of the linked list to search. 
  * @value: value to search for.
  * Return: If the value is not present or the head of the list is NULL, NULL. 
  * Otherwise, a pointer to the first node where the value is located.
  * Description: Prints a value every time it is compared in the list. 
  * Uses the square root of the list size as the jump step. 
  */ 
 skiplist_t *linear_skip(skiplist_t *list, int value) 
 { 
         skiplist_t *node, *skip; 
  
         if (list == NULL) 
                 return (NULL); 
  
         for (node = skip = list; skip->next != NULL && skip->n < value;) 
         { 
                 node = skip; 
                 if (skip->express != NULL) 
                 { 
                         skip = skip->express; 
                         printf("Value checked at index [%ld] = [%d]\n", 
                                         skip->index, skip->n); 
                 } 
                 else 
                 { 
                         while (skip->next != NULL) 
                                 skip = skip->next; 
                 } 
         } 
  
         printf("Value found between indexes [%ld] and [%ld]\n", 
                         node->index, skip->index); 
  
         for (; node->index < skip->index && node->n < value; node = node->next) 
                 printf("Value checked at index [%ld] = [%d]\n", node->index, node->n); 
         printf("Value checked at index [%ld] = [%d]\n", node->index, node->n); 
  
         return (node->n == value ? node : NULL); 
 }
