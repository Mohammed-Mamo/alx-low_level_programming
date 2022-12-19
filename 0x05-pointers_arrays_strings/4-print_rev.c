#include "main.h"
/**
 * print_rev - is function to print in reverse order
 * @*s: is apointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (; len >= 0; len--)
		_putchar(len);
	_putchar('\n');
}
