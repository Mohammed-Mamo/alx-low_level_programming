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
while (i < n)
{
	j = a[i];
	a[i] = a[(k -j)];
	a[(k - j)] = j;
	i++, j++
}
}
