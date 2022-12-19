#include "main.h"
/**
 * _strlen -is function that returns length of string
 * @*s: is input pointer
 * Return: length
 *
 */

int _strlen(char *s)
{
	int l = 0;
	
	while ((s[l] != '\0'))
		l++;

	return (l);
}
