#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: head that points to the loop in a linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
	if (tortoise == hare)
	{
	tortoise = head;
	while (tortoise != hare)
	{
	tortoise = tortoise->next;
	hare = hare->next;
	}
	return (tortoise);
	}
	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}

	return (NULL);
}
