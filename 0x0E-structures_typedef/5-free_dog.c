#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free memory
 * @d: memory location
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free (d);
}
