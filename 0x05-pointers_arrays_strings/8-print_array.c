#include <stdio.h>
#include "main.h"

/**
 * print_array - is function
 * @a: pointer
 * @n: is size
 * Return:void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d " , a[i]);
		i += i;
		if (i < n-1)
			printf(",");
	}
	printf("\n");
}
