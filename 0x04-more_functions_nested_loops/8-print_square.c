#include "main.h"

/**
 * print_square - display #
 * @size: is height of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int r;
	int i = 0;

	for (; i < size ; i++) 
	{
		for (r = 0 ; r < size ; r++)
		_putchar('#');
		_putchar('\n');
	}
}
