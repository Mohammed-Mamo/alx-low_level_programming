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
		else if (k % 3 == 0)
			printf("Fizz ");
		else if (k % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", k);
		k++;
	}
	printf("Buzz\n");
	return (0);
}
