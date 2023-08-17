#include "lists.h"
/**
 * free_dlistint - Frees dlistint
 * @head: Head of *
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_ele;

	if (head == NULL)
		free(head);

	while (head != NULL)
	{
		new_ele = head;
		head = new_ele->next;
		new_ele->next = NULL;
		free(new_ele);

	}
}
