#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - print all element of a list
 * @h - head pointer to list
 * Return - number of element in the list.
 */

 typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


 size_t print_listint(const listint_t *h)
 {
     int i = 0;
     while(h != NULL)
     {
         printf("%d\n", h->n);
         h = h->next;
         i++;
     }
     return i;
 }
