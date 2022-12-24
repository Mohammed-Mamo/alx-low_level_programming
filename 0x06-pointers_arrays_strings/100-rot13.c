#include "main.h"

/**
 * rot13 - encodes rotated character
 * @r: input character
 * Return: character
 */

char *rot13(char *r)
{
	int i = 0;

	while (r[i] != '\0')
	{
		while ((r[i] >= 'a' && r[i] <= 'z') || (r[i] >= 'A' && r[i] <= 'Z'))
		{
			if ((r[i] >= 'a' && r[i] <= 'm') || 
					(r[i] >= 'A' && r[i] <= 'M'))
				r[i] += 13;
			else
				r[i] -= 13;
			i++;
		}
		i++;
	}
	return (r);
}
