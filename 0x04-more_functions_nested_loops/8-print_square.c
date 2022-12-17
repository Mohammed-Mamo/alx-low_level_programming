#include "main.h"

/**
 * print_square - display #
 * @size: is height of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int r , s = 0;

	if (size > 0)
	{
		while (s < size)
		{
			for (r = 0 ; r < size ; r++)
				_putchar('#');
			_putchar('\n');
			s++;
		}
	}
	else
		_putchar('\n');
}
