#include "main.h"

/**
 * print_square - display #
 * Return:
 */

void print_square(int size)
{
	int r = n , i = 0;

	for (; i < size ;i++) 
	{
		for (; r > 1; r--)
		_putchar('#');
		_putchar('\n');
	}
}
