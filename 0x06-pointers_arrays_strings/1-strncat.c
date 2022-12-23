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

	while (j++ < n)
		*dest++ = *src++;
	src = aux2;

	return (aux);
}
