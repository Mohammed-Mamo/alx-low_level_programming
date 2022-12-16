#include "main.h"

/**
 * _isdigit - checks digits from 0 to 9
 * @c: is an input to be tested
 * Return: 1 if c is a digit returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	return (1);
	else 
		return (0);
}
