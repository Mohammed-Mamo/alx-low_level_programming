#include "main.h"

/**
 * format - function display form
 * @n: is numbers to be displayed
 * Return: void
 *
 */
void format(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}

	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n % 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
 * print_times_table - check function
 * @n: is size of table
 * Return: void
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				format(i * j);
			_putchar('\n');
		}
	}
}
