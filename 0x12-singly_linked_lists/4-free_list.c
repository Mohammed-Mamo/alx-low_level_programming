#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *TMP;

	TMP = head;
	while (head)
	{
		TMP = head;
		head = head->next;
		free(TMP->str);
		free(TMP);
	}
	free(head);
}
