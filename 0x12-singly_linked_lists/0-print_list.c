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
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;
	typedef struct Element Element;
	
	struct Element
	{
		int number;
		Element *next;
	};
	
	Element *addnewN(int number)
	{
		Element *newN = (Element*)malloc(sizeof(Element));
		
		newN->number = number;
		newN->next = NULL;
		
		return newN;
	}
	
	Element *add_on_beginning(Element *head, Element *newN)
	{
		newN->next = head;
		
		return head;
	}
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
