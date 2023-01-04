#include "main.h"
/**
 * factorial - a function that returns the factorial
 * @n: An input integer to be manipulated
 * Return: -1 if error, The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if ((n = 1 || n = 0))
		return (1);
	return (n * factorial(n - 1));
}
