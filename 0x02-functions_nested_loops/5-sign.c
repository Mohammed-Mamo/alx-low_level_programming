#include "main.h"

/**
* this function displays number with its sign
* print_sign - check main
* @n: is an input to the function
* Description: it will display magnitude and sign also
* specifically used for negative, positive or zero
* Return : 1, for positive ,0 for zero -1 for negative
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
