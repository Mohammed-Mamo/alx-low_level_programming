#include "main.h"
/**
 * print_number - function
 * @n: number tobe tesprinted
 * Return: void
 *
 */

void print_number(int n)
{
	int j = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		n * = -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
	while (n / j == 0)
		j /= 10;
	while (j >=1)
	{
		_putchar((n /j) + '0');
		n %= j;
		j /= 10;
	}
	}
}
