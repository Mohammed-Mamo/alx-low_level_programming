#include "main.h"
/**
* _sqrt - find square root
* @p: Number to be squared
* @r: Number whose sqrt is required
* Return: root of the number
*/
int _sqrt(int p, int r)
{
	if (p > r)
		return (-1);
	else if (p * p == r)
		return (p);
	return (_sqrt(p + 1, r));
}
/**
 *_sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
