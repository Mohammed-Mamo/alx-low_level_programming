#include "main.h"
/**
 * description: the function checks whether argument is a letter or digit
 * _isalpha begin by taking argument c as an integer
 * returns 1 if letter , 0 otherwise
 */
int _isalpha(int c)
{
	if((c <= 122 && c >= 97) || (c >=65 && c <= 90))
		return (1);
	else
		return (0);
}
