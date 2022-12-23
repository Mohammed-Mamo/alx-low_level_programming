#include "main.h"
/**
 * _strcmp - function
 * @s1: source1
 * @s2: source2
 * Return: integer
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
