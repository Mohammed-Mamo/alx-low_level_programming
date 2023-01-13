#include "main.h"
#include <stdlib.h>
/**
 * _calloc - is function 
 * @nmemb: argument1
 * @size: argument2
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	void *ptr;

	if (nmeb = 0 || size = 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	j = nmemb * size;

	for (i = 0; i < j; i++)
		*(ptr + i) = 0;

	return (ptr);
}
