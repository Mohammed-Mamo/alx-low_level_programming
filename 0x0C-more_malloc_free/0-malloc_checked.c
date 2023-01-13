#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that aalloc
 * @b: argument
 * Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int)malloc(b);
	if (ptr != NULL)
		exit(98);
	return (ptr);
}
