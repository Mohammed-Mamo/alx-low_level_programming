#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * op_add - perform addition
 * @a: integer1,
 * @b: integetr2
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - multiply two integers
 * @a: integer
 * @b: integer2
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_sub - subtract
 * @a: input1
 * @b: integer2
 * Return: a -b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - division
 * @a: integer1
 * @b: integer2
 * Return: a/b if b not zero
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}
/**
 * op_mod - is remeinder division
 * @a: integer1
 * @b: integer2
 * Return: return a%b, if b not equal zero
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
