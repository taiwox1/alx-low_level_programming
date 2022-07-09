#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - add a node at the end of a linked list
 * @h: The character to print
 * Return: new node
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
