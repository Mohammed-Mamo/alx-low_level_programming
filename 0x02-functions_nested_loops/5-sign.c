#include "main.h"
/**
* print_sign - check main
* @n: is integer input
* it prints out the sign of a number
* Return: values 1 if +ve, -1 if -ve or 0
* print the sign as + , - or 0.
*/

int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	return (sign);
}
