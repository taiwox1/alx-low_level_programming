#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linked list
 * @h:list linked
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		printf("[%d] %s\n", new->len,
		new->str != NULL ? new->str : "(nil)");
		new = new->next;
		num++;
	}
	return (num);
}
