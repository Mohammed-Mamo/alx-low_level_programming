#include "main.h"
/**
 * _strcpy - is function
 * @dest: destination array
 * @src: source
 *
 * Return: adress of destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (src[l] != '\0')
		l++;
	if (l > 0)
	{
	for (; i <= l; i++)
		dest[i] = src[i];
	}
	return (dest);
}
