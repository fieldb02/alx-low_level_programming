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
	list_t *current_node, *temp;

	current_node = head;
	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp->str);
		free(temp);
	}
	free(current_node);
}
