#include "lists.h"

/**
 *print_listint - prints all the elements of a listint_t list.
 *@h: head of list
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t int_nodes;

	int_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		int_nodes++;
	}

	return (int_nodes);
}
