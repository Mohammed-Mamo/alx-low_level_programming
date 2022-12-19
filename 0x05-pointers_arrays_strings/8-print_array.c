#include <stdio.h>
#include "main.h"

/**
 * print_array - is function
 * @*a: pointer, 
 * @n: is size 
 * Return:void
 */
void print_array(int *a, int n)
{
	int k =0;

	while (i <= n-1)
	{
		printf("%d " , a[i]);
		if (i < n-1)
			printf(",");
	}
	printf("\n");
}
