#include "main.h"

/**
* _isdigit - checks digits from 0 to 9
* @c: is an input to be tested
*
* Return: 1 if c is a digit returns 0 otherwise
*/

int _isdigit(int c)
{
	char d = '0';
	int isdigit = 0;

	while (d <= '9')
	{
		if (d == c)
		{
			isdigit = 1;
			break;
		}
		d++;
	}
	return (isdigit);
}
