#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint_end - that adds a new node at the end of a listint_t list.
 * @head: head that points to a new node
 * @n: new nodes of integer add at the end of listint_t list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	}

	return (*head);
}
