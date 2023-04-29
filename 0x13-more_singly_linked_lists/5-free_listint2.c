#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: head that points to a free listint_t list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	}
	head = NULL;
}
