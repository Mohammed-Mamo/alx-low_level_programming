#include "main.h"

/**
 * _isdigit - checks digits from 0 to 9
 * @c: is an input to be tested
 * Return: 1 if c is a digit returns 0 otherwise
 */
int _isdigit(int c)
{
	int digit =0;
	
	if (c <= '9' && c >= '0')
		digit = 1;
	return (digit);
}
