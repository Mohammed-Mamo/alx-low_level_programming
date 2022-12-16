#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: is an input character
 *
 * Return: on succes 1
 * on error, -1
 */
int _putchar(char c)
{
return ((write(1,&c,1));
		}
