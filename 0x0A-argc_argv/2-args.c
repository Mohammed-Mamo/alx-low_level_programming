#include <stdio.h>
/**
 * main - func
 * @argc: counter
 * @argv: vector
 * Return: integer
 *
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
