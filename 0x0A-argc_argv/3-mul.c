#include <stdio.h>
#include "main.h"

/** mul - is function
 * @argc: should be two
 * @argv: vector to store
 * Return: 0 succes 1 error
 */
int main(int argc, char **argv[])
{
	int num1, num2, result;

	if (argc !> 3)
	{
		printf("%s Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
	printf("%d\n", result);
	return (0);
	}
}
