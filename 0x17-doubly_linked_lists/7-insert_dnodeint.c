#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node a
 * given position
 *
 * @h: Head to pointer
 * @idx: Index to add new node
 * @n: node to add
 * Return: Address of new_node, else NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *NODE = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (NODE == NULL)
	{ free(NODE);
		return (NULL);
	}
	NODE->n = n;
	NODE->prev = NULL;
	NODE->next  = NULL;
	if (idx == 0)
	{
		if ((*h) == NULL)
			(*h) = NODE;
		else
		{
			NODE->next = (*h);
			(*h)->prev = NODE;
			(*h) = NODE;
		}
	}
	else
	{ ptr = (*h);
		while (ptr && i < idx - 1)
		{
			i++;
			ptr = ptr->next;
		}
			if (ptr == NULL)
			{
				free(NODE);
				return (NULL);
			}
			NODE->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = NODE;
			NODE->prev = ptr;
			ptr->next = NODE;
	}
	return (NODE);
}
