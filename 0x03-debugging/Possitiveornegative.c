#include <stdio.h>
/**
 * positive_or_negative - determine whether i
 * is greater, equal, or less than zero
 * @i: is an integer to be tested
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("it is zero ,neither positive nor negative\n");
}
