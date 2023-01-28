#include "lists.h"
#include <stdio.h>
/**
 * list_len - A function that prints a linked list
 * @h: pointer t  head of list
 *
 * Return: number of nodes in list as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;
	
	if (h == NULL)
		return (NULL);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
