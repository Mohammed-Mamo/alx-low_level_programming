#include "main.h"

/**
 *
 *
 *
 */

void print_triangle(int size)
{
	int r;
	for (int i = 0; i < size ;i++)
	{
		for (r = i ; r > 1;r--)
			_putchar('\t');
		_putchar('#'); 
	}
		_putchar('\n');}}
