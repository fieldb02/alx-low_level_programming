#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: Head to pointer
 * @index: Pos of node to be del
 * Return: 1 if success, else, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *NODE;
	unsigned int B;

	B = 0;
	if ((*head) == NULL)
		return (-1);
	NODE = (*head);
	if (index == 0)
	{
		(*head) = NODE->next;
		if (NODE->next != NULL)
			NODE->next->prev = NULL;
		free(NODE);
		return (1);
	}

	while (NODE && B < index)
	{
		B++;
		NODE = NODE->next;
	}

	if (NODE == NULL)
		return (-1);

	if (NODE->next != NULL)
		NODE->next->prev = NODE->prev;

	if (NODE->prev != NULL)
		NODE->prev->next = NODE->next;

	free(NODE);
	return (1);
}
