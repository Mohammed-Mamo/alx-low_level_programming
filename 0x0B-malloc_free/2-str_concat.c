#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - is function
 * @s1: string 1
 * @s2: string 2
 * Return: new pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3;
	char *s12;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2 + 1;
	s12 = malloc(len3 * sizeof(char));
	if (s12 == NULL)
		return (NULL);
	while (i < len1 + len2)
	{
		if (i < len1)
		{
		s12[i] = *s1++;
		}
		else
		s12[i] = *s2++;
		i++;
	}
	s12[i] = '\0';
	return (s12);
}
