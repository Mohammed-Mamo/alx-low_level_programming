#include "main.h"
/**
 * print_rev - is function to print in reverse order
 * @s: is apointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, l = 0;

	while (s[l] != '\0')
		l++;
	if (l > 0)
	{
	for (i = l-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	}

	_putchar('\n');
}
