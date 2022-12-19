#include "main.h"
/**
 * swap_int - interchange values
 * @a: pointer 1
 * @b: pointer2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
