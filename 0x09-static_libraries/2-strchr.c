#include "main.h"
#include <stdio.h>
/**
 * _strchr - function
 * @s: string pointer
 * @c: character to be checked
 * Return: character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
