#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer on succes
 * Null otherwise
 */

int *array_range(int min, int max)
{
	int i, j, *iptr;

	j = max - min + 1;
	if (max <= min)
		return (NULL);

	iptr = malloc(j);
	if (iptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		iptr[i] = min + i;

	return (iptr);
}
