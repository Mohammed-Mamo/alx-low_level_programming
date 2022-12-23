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
	char *aux = dest;
	int i = 0;

	while (*dest)
	{
		dest++;
		i++;
	}
	i++;

	while (n--)
		*dest++ = *src++;

	*dest = '\0';
	return (aux);
}
