#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nlocation, *nptr;
	unsigned int i = 0;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	nlocation = malloc(new_size);
	nptr = ptr;
	if (old_size > new_size)

		old_size = new_size;
	for (i = 0; i < old_size; i++)
		nlocation[i] = nptr[i];
	free (ptr);
	return (nlocation);
}
