#include "main.h"

/**
* _isalpha - checks main
* it wil differentiatwe between alphapbetas upper or lower and other symbols
* it uses one variable
* @c:-is a input character
* Description: the function outputs 1 for alphabet
* the function takes Ascii code of a character to compare
* Return: value 1 for  alphabet ,0 for others
*/

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
