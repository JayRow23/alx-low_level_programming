#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - that deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head : head point to be delete of a listint_t
 *
 * Return: the head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
