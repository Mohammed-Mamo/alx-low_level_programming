#include "main.h"

/**
 * checks the largest of three integers
 * largest_number - is a function
 * @a: is an input integer1
 * @b: is second integer
 * @c: is third integer
 * return: a largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
