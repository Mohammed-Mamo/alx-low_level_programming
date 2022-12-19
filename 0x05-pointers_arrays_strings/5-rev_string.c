#include "main.h"
/**
 * rev_string - function that swaps string
 * @s: is an input
 *
 * return: nothing
 */
void rev_string(char *s)
{

	char temp;
	int i = 0;
	int l = 0;

	while (s[l] != '\0')
		l++;
	l = l - 1;

	while (i < l)
	{
		temp = s[i];
		s[i] = s[l];
		s[l] = temp;
		i++;
		l--;
	}
}
