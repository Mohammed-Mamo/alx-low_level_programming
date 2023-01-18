#include <stdlib.h>
/**
 * int_index - is function
 * @array: is apointer to array
 * @size: array size
 * @cmp: cmp function for comparison
 * Return: Index of 1st element where cmp returns 1
 * it returns -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
