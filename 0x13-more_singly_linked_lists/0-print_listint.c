#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_listint - that prints all the elements of a listint_t list.
 * @h: head that points to the list_t list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	printf("%d\n", h->n);
	h = h->next;
	}

	return (nodes);
}
