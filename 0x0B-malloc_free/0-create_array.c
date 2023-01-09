#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @size: array size
 * @c: character to be stored
 * Return: a pointer to the array, or NULL if it fails
 */ 
char *create_array(unsigned int size, char c)
{
	int k = 0;
	char *l;
	l = malloc(size * sizeof(char));
	if (l == NULL || size == 0)
		return (NULL);
	else
	{
		while (i < size)
		{
			l[i] = c;
			i++;
		}
	}
	return (l);
}
