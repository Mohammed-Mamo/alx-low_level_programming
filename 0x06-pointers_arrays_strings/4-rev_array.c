#include "main.h"

/**
 * reverse_array - function to reverse
 * @a: array
 * @n: array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j = 0;
	int k = n - 1;

	for (; j < n; j++)
			{
				i = a[j];
				a[j] = a[k];
				a[k] = i;
				k--;
			}

}
