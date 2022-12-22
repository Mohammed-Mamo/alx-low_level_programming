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
	int i = 0, l = 0;

	while (dest[l] != '\n')
		l++;
	for (; i < n; i++)
		dest[++l] = src[i];
	return (dest);
}
