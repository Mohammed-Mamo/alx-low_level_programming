#include "main.h"
/**
 * puts2 - a function
 * @*str: is an input
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[l] != '\0')
		l++;
	l = l - 1;

	while (i <= l)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

