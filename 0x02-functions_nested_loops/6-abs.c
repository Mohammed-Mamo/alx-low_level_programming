#include "main.h"

/**
* _abs - chech main
* @r: An integre input
* Description: This function returns absolute value of a number
* input r of the function is considered to be an integer
* the out put is also an positive integer
* Return: Absolut value of number r
*/

int _abs(int r)

{
	if (r >= 0)
		return (r);
	return (r * -1);
}
