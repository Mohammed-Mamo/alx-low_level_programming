#include "main.h"
/**
 * _strncat - a function
 * @dest: - destination
 * @src: - source
 * @n: length of cstring
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *aux = dest, *aux2 = src;
	int i = 0, j = 0;

	while (*src)
	{
		src++;
		i++;
	}
	i++;

	if (n > i)
	n = i;
	src = aux2;

	while (j < n)
	{
		*dest++ = *src++;
		j++;
	}

	return (aux);
}
