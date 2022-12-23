#include "main.h"
int separator(char c);
/**
* cap_string - function
* @ltr: upper case text
*
* Return: capitalized
*/

char *cap_string(char *ltr)
{
	int i = 0;

	while (ltr[i])
	{
		if (i == 0 && (ltr[i] >= 'a' && ltr[i] <= 'z'))
			ltr[i] -= 32;
		if (separator[ltr] && (ltr[i + 1] >= 'a' && ltr[i + 1] <= 'z'))
				ltr[i + 1] -= 32;
		i++;
	}
	return (ltr);
}
#include "main.h"
/**
 * separator - check main
 * @c: input
 * Return: 1 succes ,0 fail
 *
 */
int separator(char c)
{
	int j;
	char Separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (j = 0; j < 13; j++)
		if (cii == Separators[j])
			return (1);
	return (0);
}
