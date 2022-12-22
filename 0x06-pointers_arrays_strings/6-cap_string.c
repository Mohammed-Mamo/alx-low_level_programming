#include "main.h"
/**
 * cap_string - function
 * @*: text
 * Return: capitalized
*/
char *cap_string(char *ltr)
{
	int i =0;

	while (ltr[i])
	{
		if (ltr[i] >= 'a' && ltr[i] <= 'z')
			ltr[i] -= 32;
		i++;
	}
	return (ltr);
}
