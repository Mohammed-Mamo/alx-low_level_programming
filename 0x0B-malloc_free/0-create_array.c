#include "main.h"
/**
 * create_array - function
 * @size: array size
 * @c: character to be stored
 * Return: a pointer to the array, or NULL if it fails
 */ 
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (NULL);
	char *a ;
	else
	{
	a = malloc(sizeof(*a));
	a[0] = c;
	return (a);
	}
}
