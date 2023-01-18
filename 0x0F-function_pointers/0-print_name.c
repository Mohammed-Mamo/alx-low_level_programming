#include <stdio.h>
/**
 * print_name - is function to display the name
 * @name: name to be printed
 * @f: function name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
			f(name);
}
