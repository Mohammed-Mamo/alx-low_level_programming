#include "main.h"
/**
 * is_prime_number - check divisiblity 2
 * @n: numerator
 * Return: 0 if false 1 other wise
 */
int is_prime_number(int n)
{
	if (n % 2 != 0)
		return (1);
	else 
		return (0);
}
