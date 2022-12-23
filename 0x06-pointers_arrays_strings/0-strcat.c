#include "main.h"
/**
 * _strcat - is function
 * @dest: destination pointer
 * @src: source to be copied
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	char *aux = dest;

	while(*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
return (aux);
}
