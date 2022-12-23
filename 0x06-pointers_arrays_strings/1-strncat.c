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
	int j = 0, i;

	while (*dest)
	{
		dest++;
		j++;
	}
	dest = aux;
	for (i = 0; i < n; i++)
		dest[j++] = *src++;
	src = aux2;

	return (dest);
}
