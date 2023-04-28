#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t
 * @head: Pointer to the start of the list
 *
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		free(head->str);
		free(head);
		head = current_node;
	}
}
