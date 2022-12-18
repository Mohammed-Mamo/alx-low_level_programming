#include <stdio.h>

/**
 * main - entry point
 * no input
 * Return: 0 succes
 */

int main(void)
{
	int k = 1;

	while (k < 100)
	{
		if (k % 3 == 0 && k % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
