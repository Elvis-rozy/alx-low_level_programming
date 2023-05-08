#include "search_algos.h" 
  
 /** 
  * jump_list - searches for value in sorted linked list 
  * uses the Jump search algorithm. 
  * @list: Pointer to the head of the linked list 
  * @size: Number of nodes in the linked list 
  * @value: value to search for
  * Return: Pointer to first node where value is located 
  * if value is not present in head or if head is NULL, return NULL 
  */ 
 listint_t *jump_list(listint_t *list, size_t size, int value) 
 { 
         listint_t *down =  NULL, *top = NULL; 
         size_t extent = 0; 
  
         if (list != NULL) 
         { 
                 down = list; 
                 top = list; 
                 while (top->next != NULL && top->index < size && top->n < value) 
                 { 
                         down = top; 
                         extent += sqrt(size); 
                         while (top->index < extent && top->next != NULL) 
                                 top = top->next; 
                         printf("Value checked at index [%lu] = [%d]\n", top->index, top->n); 
                 } 
                 printf("Value found between indexes [%lu] and [%lu]\n", 
                        down->index, top->index); 
                 while (down != NULL && down->index < size && down->index <= top->index) 
                 { 
                         printf("Value checked at index [%lu] = [%d]\n", down->index, down->n); 
                         if (down->n == value) 
                                 return (down); 
                         down = down->next; 
                 } 
         } 
         return (NULL); 
  
 }
