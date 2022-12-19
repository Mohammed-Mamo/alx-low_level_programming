#include "main.h"
/**
 * _puts - is a function
 * @*str: is pointer of strings
 *
 * Return: void
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
