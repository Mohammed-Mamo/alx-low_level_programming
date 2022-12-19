#include "main.h"
/**
 * *_strcpy- is function
 * @*dest: destination array
 * @*src: source
 * Return: adress of destination
 */
char *_strcpy(char *dest, char *src)
{
	char *temp =dest;

	while (*src)
		*dest++ = src++;
	return (temp);
}
