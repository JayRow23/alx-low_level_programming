#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_nodeint_at_index - that returns the nth node of a listint_t linked list
 * @head: head that points to the index nodes of listint_t
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
	temp = temp->next;
	j++;
	}
	return (temp ? temp : NULL);
}
