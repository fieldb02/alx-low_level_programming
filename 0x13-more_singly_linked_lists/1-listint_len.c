#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Returns the number of elements in a listint_t list
 * @h: Pointer to head of listin_t
 *
 * Return: Number of elements in list_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
