#include "lists.h"
#include <string.h>

/**
 * *add_node - adds a node to a linked list head
 * @head: linked list head
 * @str: string element of the linked list
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	int n_str;

	new_nd = (list_t *) malloc(sizeof(list_t));

	if (new_nd == NULL)
	{
		free(new_nd);
		return (NULL);
	}

	new_nd->str = strdup(str);
	if (new_nd->str == NULL)
	{
		free(new_nd);
		return (NULL);
	}
	for (n_str = 0; str[n_str] != '\0';  n_str++)
	;

	new_nd->len = n_str;
	new_nd->next = *head;
	*head = new_nd;

	return (new_nd);
}
