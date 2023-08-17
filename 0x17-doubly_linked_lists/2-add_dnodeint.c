#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the neginning of a list
 * @head: Head to pointer of list
 * @n: Node
 * Return: Address of new element, else NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));

	if (current == NULL)
	{
		free(current);
		return (NULL);
	}
	current->n = n;
	current->prev = NULL;
	current->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = current;
	}
	else
	{
		current->next = (*head);
		(*head)->prev = current;
		(*head) = current;
	}
	return (current);
}
