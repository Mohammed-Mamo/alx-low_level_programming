#include "main.h"
/**
 * comment section
* function that prints sign of a number n
* print_sign - it is a function
* @n: is integer input
* it prints out the sign of a number
* Return: values 1 if +ve, -1 if -ve or 0
* greater than 0 lesshan zero equals 0
* print the sign as + , - or 0.
* print_sign - print sign of n
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
