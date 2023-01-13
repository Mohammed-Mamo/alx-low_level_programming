#include "main.h"
#include <stdlib.h>

/**
* array_range - function
* @min: minimum integer
* @max: maximum integer
* Return: pointer on succes
*/

int *array_range(int min, int max)
{
	int i;
	int *iptr;

	if (max <= min)
		return (NULL);
	iptr = malloc((max - min + 1));
	if (iptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min); i++)
		*(iptr + i) = min + i;
	return (iptr);
}
