#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node -A function that add new node at start
 * @head: pointer to head of linked list
 * @str: existing node
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	int length = 0;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);
	while (str[length])
		length++;

	new_nd->len = length;
	new_nd->str = strdup(str);
	new_nd->next = *head;
	*head = new_nd;
	return (new_nd);
}
