#include "main.h"
/**
 * print_most_numbers - skip printing 2 and 4 
 * 
 * Return: void
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j == 2 || j == 4)
			continue;
		_putchar(j);
	}

	_putchar('\n');

}
