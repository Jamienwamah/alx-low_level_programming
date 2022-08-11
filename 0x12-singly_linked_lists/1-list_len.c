#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h: singly linked list
 *Return: the number of element.
 */
size_t list_len(const list_t *h)
{
	size_t b;

	b = 0;
	while (h != NULL)
	{
		h = h->next;
		b++;
	}
	return (b);
}
