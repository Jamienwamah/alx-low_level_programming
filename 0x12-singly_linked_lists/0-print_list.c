#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_list - prints all the elements of a list_t list.
 *If str is NULL, print [0] (nil)
 *@format: the format
 *@str: the string
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *head;
	list_t *tail;
	list_t hello = {"world!", 5, NULL}

	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
