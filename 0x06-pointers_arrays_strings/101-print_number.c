#include "main.h"
/**
 * print_number: function
 * @n: integer
 * Return: void
 *
 */
void print_number(int n)
{
	int j = n;
	int i = 1;
if(j < 0)
{
_putchar('-');
j *= -1;
}
while (j / 10 >= 10)
{
	j /= 10;
	i *= 10;
}
i *= 10;
for (; n / i > 0; i /= 10)
_putchar(n / i);

_putchar('\n');
}
