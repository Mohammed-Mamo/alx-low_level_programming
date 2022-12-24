#include "main.h"
int countdigit(int num);

/**
 * print_number - function
 * @n: integer
 * Return: void
 *
 */
void print_number(int n)
{
	int x;
	int j = n;

	if (n < 0)
	{
		_putchar('-');
		j *= -1;
		x = j;
	}

	if ( j == 0)
		_putchar('0');

	else if (j <= 9)
		_putchar(j);

	else
	{
		x = countdigit(j);

		while ( j / x >= 1)
		{
			_putchar((j / x) + '0');
			j %= x;
			x /= 10;
		}
	}
}
/**
 * countdigit - counts number of digit
 * @num: number to be tested
 * Return: return no of digit
 *
 */

int countdigit(int num)
{
	int y = 10;
	int z = num;

	while (z /10 >= 1)
	{
		z /= 10;
		y *=10;
	}
	return (y);
}
