#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints listint
 * @head: Pointer
 *
 * Return: ...
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = head;
	size_t count = 0;

	while (current_node != NULL)
	{
		printf("[%p] %d", (void *) current_node, current_node->n);
		putchar(10);
		count++;
		if (current_node <= current_node->next)
		{
			printf("-> [%p] %d", (void *) current_node, current_node->next->n);
			putchar(10);
			exit(98);
		}
		current_node = current_node->next;
	}
	return (count);
}
