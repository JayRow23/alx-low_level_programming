#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: head points to the first node of the listint_t list
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
