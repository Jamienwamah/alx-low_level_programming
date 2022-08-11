#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_list - prints all the elements of a list_t list.
 *If str is NULL, print [0] (nil)
 *@h: pointer to the list_t list to print
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t elem;

	elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}

	return (elem);
}
