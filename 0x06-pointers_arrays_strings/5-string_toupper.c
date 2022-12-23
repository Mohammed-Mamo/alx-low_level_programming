#include "main.h"
/**
 * string_toupper - function
 * @t: pointer
 *
 * Return: upper
 */

char *string_toupper(char *t)
{
	char *aux = t;

	while (*t)
	{
		if (*t >= 'a' && *t <= 'z')
			*t -= 32;
		t++;
	}
	return (aux);
}
