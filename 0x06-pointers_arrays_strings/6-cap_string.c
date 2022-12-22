#include "main.h"

/**
* cap_string - function
* @ltr: upper case text
*
* Return: capitalized
*/

char *cap_string(char *ltr)
{
	int i = 0 , j;
	char seperatos[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	while (ltr[i])
	{
		if (ltr[i] >= 'a' && ltr[i] <= 'z')
			ltr[i] -= 32;
		for (j =0; j < 13; j++)
			if (ltr[i] == separator[j] && ltr[i] >= 'a' && ltr[i] <= 'z')
				ltr[i + 1] -= 32;
		i++;
	}
	return (ltr);
}
