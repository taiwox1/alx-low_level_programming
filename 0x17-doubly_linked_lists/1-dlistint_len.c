#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - function that print all the element of a list
 * @h: pointer to the list
 * return: num of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node = 0;

	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		num_node++;
	}
	return (num_node);
}
