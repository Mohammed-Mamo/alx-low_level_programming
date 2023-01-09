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

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	len3 = len1 + len2;
	s12 = malloc(1 + (len3 * sizeof(char)));
	if ((s1 == NULL && s2 == NULL) || s12 == NULL)
			return (NULL);
		while (s1 != NULL && i < len1)
	{
		s12[i] = s1[i];
		i += 1;
	}
	while (s2 != NULL && i < len3)
	{
		s12[i] = s2[i];
		i++;
	}
	s12[i] = '\0';
	return (s12);
}
