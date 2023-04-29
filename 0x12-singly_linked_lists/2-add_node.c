#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: Pointer to a pointer to the start of the list
 *
 * @str: String to be stored in new code
 *
 * Return: Address of new element, else, NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
