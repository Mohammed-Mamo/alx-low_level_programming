#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * op_add - is addition
 * @a: integer1
 * @b: integer2
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub: is subtraction
 * A: input1
 * @b: input2
 * Return: a-b
 */ 
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 * @a: num1
 * @b: num2
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - is division
 * @: intege1
 * @b: integer2
 * Return: a/b, if b is not zero
 */
int op_div(int a, int b)
{
	if ( b == 0)
	{
		printf("ERROR\n");
		exit (100);
	return (a / b);
}
/**
 * op_mod: modulo division
 * @a: input1
 * @b:input2
 * Return: a%b, b not equal to zero
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit (100);
	}
	return (a % b);
}
