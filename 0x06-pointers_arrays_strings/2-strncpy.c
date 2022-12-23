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
	int sl = 0, i = 0;
	char *a = dest, *b = src;

	while (*src)
	{
		for (; i < n; i++)
		dest[i++] = *src++;
	}
	return (a);
}
