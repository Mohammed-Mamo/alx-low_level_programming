#include "main.h"

/**
 * print_numbers - prints digits 0 -9
 * no input
 * Return: void
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
