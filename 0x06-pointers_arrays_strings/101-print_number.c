#include "main.h"
/**
 * print_number - function
 * @n: integer
 * Return: void
 *
 */
void print_number(int n)
{
	int x = n, j = n;
	int i = 1;


	if (n < 0)
	{
		_putchar('-');
		j *= -1;
		x = j;
	}

	if (j < 10 && j >= 0)
		_putchar(j);

else if (j > 10)
{
	while (j /10)
	{
		j /= 10;
		i *=10;
	}
for (; i > 1; i /=10)
{
	_putchar(x / i);
x /= i * 10;
}
}
	_putchar(j);
}
_putchar('\n');
}