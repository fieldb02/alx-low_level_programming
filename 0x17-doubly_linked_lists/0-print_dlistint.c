#include "lists.h"
/**
 * print_dlistint - Prints all elements of a list
 * @h: Pointer head
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t a;

	a = 0;
	if (h == NULL)
	{
		return (0);
	}
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		a++;
		current = current->next;
	}
	return (a);
}
