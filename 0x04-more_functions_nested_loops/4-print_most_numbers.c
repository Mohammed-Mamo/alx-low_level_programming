#include "main.h"

/**
 * print_most_numbers - skip printing 2 and 4
 * no imput
 * Return: void
 */

void print_most_numbers(void)
{
	int j = '0';

	for (; j < '10'; j++)
	{
		if (j != '2' || j != '4')
		_putchar(j);
	}
	_putchar('\n');
i}
