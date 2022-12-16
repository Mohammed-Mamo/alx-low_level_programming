#include "main.h"
/**
 * print diagonal
 *
 * return:
 */

void print_diagonal(int n)
{
	for (int r =1; r <= n; r++)
	{
		for (int l = r - 1; l > 0; l--)
		{
			_putchar('\t');
		}
			
			_putchar('\');
			_putchar('\n');
	}
}
