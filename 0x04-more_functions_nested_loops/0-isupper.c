#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char u = 'A';
	int isupper = 0;
	while (u <= 'Z')
	{
		if (u == c)
		{
			isupper = 1;
			break;
		}
	}
return (isupper);
}
