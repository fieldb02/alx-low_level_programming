#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses listint_t list
 *
 * @head: Pointer to the head of the linked list
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next;
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		next = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next;
	}
	*head = prev_node;
	return (*head);
}
