#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list.
 * @head: head that points to free listint_t list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}

}
