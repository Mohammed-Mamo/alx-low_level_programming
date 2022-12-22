#include "main.h"
/**
* leet - function encodes to
* @x: input pointer
*Return: character
*/

char *leet(char *x)
{
	int i = 0 , j;

	char encode[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char alphabet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (x[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == alphabet[j])
				x[i] = encode[j];
		}
		i++;
	}
	return (x);
}
