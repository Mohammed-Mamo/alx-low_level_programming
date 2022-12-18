#include "main.h"
#include <stdio.h>

/** 
* print_integer - A function to priting n
* @m: an input unsigned integer
* Return: Nothing
*/

void print_integer(int m)

{
	int i = 1000000000;
	int div;
	while (i >= 1)
	{
		div = m / i;
		if (div != 0)
		{
			_putchar(div % 10 + '0');
		}
		i /= 10;
	}
}
/**
 * print_number - prints multi character decimal
 * @n: is input 
 * Return: nothing
 */
void print_number(int n)

{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}
