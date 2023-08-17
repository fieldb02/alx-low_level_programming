#include "lists.h"
/**
 * sum_dlistint - Returns sum of a node
 * @head: Head to pointer
 * Return: Node sum, else, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int node_sum = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		node_sum += current->n;
		current = current->next;
	}
	return (node_sum);
}
