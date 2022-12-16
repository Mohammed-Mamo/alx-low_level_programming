#include "main.h"

/**
* print_number - prints digits 0 -9
*
* Return: void
*/

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
