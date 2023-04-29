#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head that linked to listint_t list
 * Return: the num of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	h = h->next;
	}

	return (nodes);
}
