#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - main function
 * @argc: argument count,
 * @argv: array of arguments
 * Return: exit 0, normal
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
