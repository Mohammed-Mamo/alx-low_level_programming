int separators(char c);
/**
* cap_string - function
* @ltr: upper case text
*
* Return: capitalized
*/

char *cap_string(char *small)
{
	int i = 0;
	
	while (small[i])
	{
		if (i == 0 && (small[i] >= 'a' && small[i] <= 'z'))
			small[i] -= 32;
	if (separators(small[i]) && ( small[i + 1] >= 'a' && small[i + 1] <= 'z'))
		small[i + 1] -= 32;
		i++;
	}
	return (small);
}

/**
 * separator - check for separators like new line, tab, 
 * @c: input
 * Return: 1 succes ,0 fail
 *
 */
int separators(char c)
{
char sep[13] = {' ', '\t', '\n', ',', '.', '!', '?', ';', '"', '(', ')', '{', '{'};
int j = 0, k = 0;

for (; j < 13; j++)
{
if (sep[j] == c)
	k = 1;
}
return (k);
}

