#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head: Pointer to a ptr of listint_t
 * Sets the head pointer to NULL after freeing listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
	{
		return;
	}
	if (*head == NULL)
	{
		return;
	}
	while (*head == NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	*head = NULL;
}
