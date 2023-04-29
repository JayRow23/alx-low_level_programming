#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * delete_nodeint_at_index - that deletes the node at index
 * index of a listint_t linked list.
 * @head: head points to the first node of the list
 * @index: index of nodes to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	while (j < index - 1)
	{
	if (!temp || !(temp->next))
		return (-1);
	temp = temp->next;
	j++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);

}
