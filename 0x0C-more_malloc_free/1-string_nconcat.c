#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function
 * @s1: string1
 * @s2: string2
 * @n: size of s2
 * Return: pointer on succes , NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1, len2, len3;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len2 <= n)
		len2 = n;
	len3 = len1 + len2 + 1;
	ptr = malloc(len3);
	if (ptr == NULL)
		return (NULL);
	for (;i < len3; i++)
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
