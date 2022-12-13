#include "main.h"
/**
 * this function displays number with its sign
 * print_sign(int n) takes  an integer
 * n is an input to the function
 * return : 1, for positive ,0 for zero -1 for negative
 */
int print_sign(int n)
{
	char neg, pos , zr;
	neg = '-';
	pos = '+';

	if (n>0)
	{
		_putchar(pos);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else 
	{
		_putchar(neg);
		return (-1);
	}
}
