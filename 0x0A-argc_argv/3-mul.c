#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - is function
 * @argc: should be two
 * @argv: vector to store
 * Return: 0 succes 1 error
 */
int main(int argc, char **argv)
{
	int num1, num2, product;

	if ((argc < 3))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
		return (0);
	}
}
