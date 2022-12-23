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
	char *aux1 = dest, *aux2 = src;
	int j = 0, i;

	while (*src)
	{
		src++;
		j++;
	}

	while (*dest)
		dest++;

	if (n > j)
		n = j;

	src = aux2;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (aux1);
}
