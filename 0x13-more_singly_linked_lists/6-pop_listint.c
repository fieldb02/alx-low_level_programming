#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head of the node of listint_t and
 * returns the head node's data
 *
 * @head: Pointer to head of listint_t
 *
 * Return: The data stored in the head of the list, else, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	while (*head != NULL)
	{
		p = head;
		data = p->n;
		*head = p->next;
		free(p);
	}
	return (data);
}
