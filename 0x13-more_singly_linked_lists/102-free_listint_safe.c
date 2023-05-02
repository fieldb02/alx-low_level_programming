#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees listint_t safely
 * @h: Pointer
 *
 * Return: ....
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			count++;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	*h = NULL;
	return (count);
}
