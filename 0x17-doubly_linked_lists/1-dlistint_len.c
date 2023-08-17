#include "lists.h"

/**
 * dlistint_len - Returns the length of list
 * @h: Pointer
 * Return: Number of elements in the
 * libked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t a;

	a = 0;
	if (h == NULL)
	{
		return (0);
	}
	tmp = h;
	while (tmp != NULL)
	{
		a++;
		tmp = tmp->next;
	}
	return (a);
}
