#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to head of listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
	free(head);
}
