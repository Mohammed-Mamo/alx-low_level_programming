#include "main.h"
/**
* more_numbers - print 0 to 14
* ten times
* 
* Return: no 
*/

void more_numbers(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j <=14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
