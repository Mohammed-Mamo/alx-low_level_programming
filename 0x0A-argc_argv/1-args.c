#include <stdio.h>

/**
 * main - check main fun
 * @argc: counter
 * @argv: vector
 * Return:0 succes
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
