#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer input for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j = 1;
listint_t *new_nd, *tmp;

if (head == NULL)
return (NULL);
new_nd = malloc(sizeof(listint_t));
if (new_nd == NULL)
return (NULL);
if (*head == NULL)
{
*head = new_nd;
new_nd->next = NULL;
new_nd->n = n;
return (new_nd);
}
if (idx == 0)
{
new_nd->next = *head;
new_nd->n = n;
*head = new_nd;
return (new_nd);
}
tmp = *head;
while (j <= idx)
{
tmp = tmp->next;
j++;
}
new_nd->n = n;
new_nd->next = tmp->next;
tmp->next = new_nd;
return (new_nd);
}
