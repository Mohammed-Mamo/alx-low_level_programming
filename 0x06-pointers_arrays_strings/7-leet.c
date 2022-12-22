#include "main.h"
/**
* leet - function encodes to
* @x: input pointer
*Return: character
*/

char *leet(char *x)
{
	int i = 0, j = 0;

	char encode[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char alphabet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (x[j])
	{
		for (; i < 10; i++)
		{
			if (x[j] == alphabet[i])
				x[j] = encode[i];
		}
		j++;
	}
	return (x);
}
