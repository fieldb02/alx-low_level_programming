#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end
 * @head: Head of pointer
 * @n: Node to add
 *
 * Return: Address of new element, else NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ele = malloc(sizeof(dlistint_t));
	dlistint_t *end;

	if (new_ele == NULL)
	{
		free(new_ele);
		return (NULL);
	}
	new_ele->n = n;
	new_ele->prev = NULL;
	new_ele->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_ele;
	}
	else
	{
		end = (*head);
		while (end->next != NULL)
			end = end->next;
		new_ele->prev = end;
		end->next = new_ele;
		end = new_ele;
	}
	return (new_ele);
}
