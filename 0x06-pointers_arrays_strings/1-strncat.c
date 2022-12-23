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
	int j = 0;

	while (*dest != '\0')
	{
		dest++;
		j++;
	}
	dest = aux;
	if ( j > n)
	n = j;

	while (*src && n--)
		dest[j++] = *src++;
	src = aux2;

	return (aux);
}
