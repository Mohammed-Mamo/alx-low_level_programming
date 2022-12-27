#include "main.h"
/**
 * print_number - function
 * @n: number tobe tesprinted
 * Return: void
 *
 */

void print_number(int n)
{
	int j = n;

	if (n < 0)
	{
		_putchar('-');
		j = -n;
	}

	while (j / 10 != 0)
	{
		_putchar((j / 10));
		j /= 10;
	}
	_putchar((j % 10) + '0');
}
