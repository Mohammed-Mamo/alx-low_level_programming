#include "main.h"
/**
 * puts_half - print half content
 * @str: is input pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int h = 0, length = 0;

	while (str[length] != '\0')
		length++;
	length = length - 1;

	if (length % 2 != 0 && length >= 0)
		h = (length + 1) / 2;
	else if (length >= 0 && length % 2 == 0)
		h = length / 2;
	for (; h < length; h++)
		_putchar(str[h]);
	_putchar('\n');
}
