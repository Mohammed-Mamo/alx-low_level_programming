#include "main.h"

/**
 * rot13 - encodes rotated character
 * @r: input character
 * Return: character
 */

char *rot13(char *s)
{
	int i = 0;

	while (r[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (s);
}
