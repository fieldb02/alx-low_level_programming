#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t
 *
 * @head: A pointer to the head of the list
 * Return: The sum of all the data in n of the list, else, 0
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
