#include "main.h"
/**
 * _strncpy - function
 * @dest: destination
 * @src: source 
 * @n: length
 * return: charca
 */



char *_strncpy(char *dest, char *src, int n)
{

	int sl = 0, i = 0;
	char *a = dest, *b = src;

	while (*src)
	{
		sl++;
		src++;
	}
	sl++;
	if (n > sl)
		n = sl;
	src = b;
	for (; i < n; i++)
		*dest++ = *src++;
	return (a);
}
