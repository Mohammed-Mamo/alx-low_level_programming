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
	unsigned int l1 = 0, l2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[l1])
		l1++;
	if (s2 == NULL)
		s2 = "";

	while (s2[l2])
		l2++;
	if (n >= l2)
		n = l2;
	ptr = malloc((l1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (; i < (l1 + n); i++)
	{
		if (i < l1)
			ptr[i] = *s1, s1++;
		else
			ptr[i] = *s2, s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
