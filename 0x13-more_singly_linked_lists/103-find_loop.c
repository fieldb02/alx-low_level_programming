#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - Finds the loop in listint_t
 * @head: pointer to head
 *
 * Return: .....
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head, *b = head;

	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}
	}
	return (NULL);
}
