#include "main.h"
/**
* _islower -check main
* the function that checks lower case
* @c: is input character to be checked
* the function accepts a single ASCII equivalent of acharacter
* Return: value 1 if lowercase 0 for uppercase
*/
int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
else
	return (0);
}
