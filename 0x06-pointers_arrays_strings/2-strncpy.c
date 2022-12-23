#include "main.h"
/**
 * _strncpy - function
 * @dest: destination
 * @src: source
 * @n: length
 * Return: charca
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *aux1 = dest, *aux2 = src;

	while (*src)
	{
		src++;
		j++;
	}

	j++;

	if (n > j)
		n = j;

	src = aux2;
	for (;i < n; i++)
		*dest++ = *src++;
	dest = aux2;
	return (dest);
}
