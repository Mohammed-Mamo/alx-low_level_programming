#include "main.h"

/**
 * is_prime_number - check divisiblity 2
 * @n: number to be checked
 * Return: 0 if even false 1 other wise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 != 0)
		return (1);
	else
		return (0);
}
