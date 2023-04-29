#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - that inserts a new node at a given position.
 * @head:head points to first node of the listint_t list.
 * @n: input to insert in a new node
 * @idx: index of the new added node
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	for (j = 0; temp && j < idx; j++)
	{
	if (j == idx - 1)
	{
	new->next = temp->next;
	temp->next = new;
	return (new);
	}
	else
		temp = temp->next;
	}
	return (NULL);
}
