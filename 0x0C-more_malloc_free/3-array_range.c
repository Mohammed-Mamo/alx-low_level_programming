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

	if (min > max)
		return (NULL);
	iptr = malloc(sizeof(int) * (max - min + 1));
	if (iptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		*(iptr + i) = min + i;
	return (iptr);
}
