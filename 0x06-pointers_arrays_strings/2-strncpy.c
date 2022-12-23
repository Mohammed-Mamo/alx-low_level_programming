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
	int i = 0;
	char *temp = dest, *Source = src;

	while (*src)
	{
		for (; i < n; i++)
		*dest++ = *src++;
	}
	src = Source;
	return (temp);
}
