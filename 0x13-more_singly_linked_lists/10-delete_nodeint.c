#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 *
 * @head: Pointer to pointer to the first node of the listint_t list
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if assuccess, else, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	a = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}
	while (a && i < index - 1)
	{
		a = a->next;
		i++;
	}
	if (!a || !(a->next))
		return (-1);
	b = a->next;
	a->next = b->next;
	free(b);
	return (1);
}
