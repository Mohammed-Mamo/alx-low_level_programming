#include "main.h"
/**
 * print_number - function
 * @n: integer
 * Return: void
 *
 */
void print_number(int n)
{
	int j = n;
	int i = 1;
	int max = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		j *= -1;
	}

	if (j < 10 && j >= 0)
		_putchar(j);

else if (j > 10)
{
	while (j /10 > 0)
	{
	_putchar(j / i);
	j /= 10;
	}
	_putchar(j);
}
_putchar('\n');
}
