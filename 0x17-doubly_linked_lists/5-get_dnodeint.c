#include "lists.h"
/**
 * get_dnodeint_at_index - Returns nth node of a list
 * @head: Head to pointer
 * @index: Position
 * Return: nth node, else, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n;
	 unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	n = head;
	while (n && n->next)
	{
		if (i == index)
			return (n);
		i++;
		n = n->next;
	}
	if (i == index && n->next == NULL)
	{
		return (n);
	}
	return (NULL);
}
