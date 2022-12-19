#include "main.h"
/**
 * puts2 - a function
 * @*str: is an input
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	int len = _strlen(*str);

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

