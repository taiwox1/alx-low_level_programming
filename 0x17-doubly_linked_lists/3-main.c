#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
        size_t num_node = 0;

        const dlistint_t *temp;
        temp = h;

        while (temp != NULL)
        {
                printf("%d\n", temp->n);
                temp = temp->next;
                num_node++;
        }
        return (num_node);
}

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t  *temp;
        idlistint_t *ptr;

        temp = malloc(sizeof(dlistint_t));
        temp->prev = NULL;
        temp->n = n;
        temp->next = NULL;

        ptr = *head;
        while( ptr != NULL)
        {
                ptr = ptr->next;
        }

        temp->prev = ptr;
	ptr->next = temp;

        return (*head);
}

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
