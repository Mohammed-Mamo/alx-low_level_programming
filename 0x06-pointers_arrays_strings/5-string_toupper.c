#include "main.h"
/**
 * string_toupper - function
 * @t: pointer
 *
 * Return: upper
 */

char *string_toupper(char *t)
{
	int i =0;

	while (t[i])
	{
		if (t[i] >= 'a' && t[i] <= 'z')
			t[i] -= 32;
		i++;
	}
	return (t);
}
