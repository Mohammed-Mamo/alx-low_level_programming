#include "main.h"

/**
 * print_times_table - check main
 * @n: is a positive integer less than 15
 * Return : value 0
 * nxn multiplication table
 */
void print_times_table(int n)
{
	int i = 0 , j = 0 , k = 0;

	if ( n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j == n)
					continue;
				if ((k / 10 == 0) && (j != 0))
				{
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
