#include <stdlib.h>
/**
 * array_iterator - function
 * @array: array to function
 * @size: array size
 * @action: is function to take action
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
