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

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
