#include "main.h"
/**
 * is_divisible - check if num is divisible
 * @N: the number to be checked
 * @D: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int N, int D)
{
	if (N % D == 0)
		return (0);
	if (D == N / 2)
		return (1);
	return (is_divisible(N, D + 1));
}
/**
 * is_prime - is function
 * @n: number tobe tested
 * Return: 0 if wrong, 1 if true
 */
int is_prime_number(int n)
{
	int DVD = 2;

	if (n <= 1)
		return (0);
	If (n <= 3)
		return (1);
	return (is_divisible(n, DVD));
}
