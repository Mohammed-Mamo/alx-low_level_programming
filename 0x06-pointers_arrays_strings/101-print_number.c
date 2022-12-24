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
	int x = n;
	int j = n;
	int i = 1;

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
	else if (j > 9 )
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
	int i = 10;
	int j = num;

	while (j /10 >= 1)
	{
		j /= 10;
		i *=10;
	}
	return (i);
}
