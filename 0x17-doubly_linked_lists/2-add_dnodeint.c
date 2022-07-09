#include "lists.h"
#include <stdio.h>

/**
 * *add_dnodeint - function adds new nodes to the beginning of list
 * @head: head of the existing pointer
 * @n: value to add
 * Return: just node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	temp->next = *head;
	temp->prev = temp;
	*head = temp;
	return (*head);
}
