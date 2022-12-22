#include "main.h"
/**
* cap_string - function
* @ltr: upper case text
*
* Return: capitalized
*/

char *cap_string(char *ltr)
{
	int i = 0, j;

	char Separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (ltr[i])
	{
		if (i == 0 && (ltr[i] >= 'a' && ltr[i] <= 'z'))
			ltr[i] = ltr[i] - 32;
		else
		{
			for (j = 0; j < 13; j++)
			if (ltr[i] == Separators[j] && (ltr[i + 1] >= 'a' && ltr[i + 1] <= 'z'))
				ltr[i + 1] -= 32;
		}
		i++;
	}
	return (ltr);
}
