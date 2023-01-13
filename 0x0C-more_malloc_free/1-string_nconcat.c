#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: string1
 * @s2: string2
 * @n: size of s2
 * Return: pointer on succes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1])
		len1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (; i < (len2 + n); i++)
	{
		if (i < len1)
		{
			ptr[i] = *s1;
			s1++;
		}
		else
		{
			ptr[i] = *s2;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
