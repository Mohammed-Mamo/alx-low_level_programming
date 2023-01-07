#include <stdio.h>
#include "main.h"

/** mul - is function
 * @argc: should be two
 * @argv: vector to store
 * Return: 0 succes 1 error
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%s Error\n");
		return (1);
	}
	printf("%dError\n", (argv[0] * argv[1]));
	return (0);
}
