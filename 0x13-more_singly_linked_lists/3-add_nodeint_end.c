#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - A function that adds a new nod at the end of a list
 * @head: A pointer to list_t structure
 * @n: An integer data to put into the new node
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_list, *temp;

if (head)
{
new_list = malloc(sizeof(listint_t));
if (new_list == NULL)
return (NULL);
new_list->n = n;
new_list->next = NULL;
if (*head == NULL)
{
*head = new_list;
return (*head);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_list;
return (temp);
}
}
return (NULL);
}
