#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * add - function
 * @argc: counter
 * @argv: vector
 * Return: 0 succes 1 other
 */
int main(int argc, char **argv)
{
	int num, sum = 0, i;
	while (argc-- > 1)
			{
				for (i = 0; argv[argc][i]; i++)
				{
				       if(!(isdigit(argv[argc][i])))
				       {
					       printf("Error\n");
					       return (1);
				       }
				}
				num = atoi(argv[argc]);
				sum += num;
			}
	printf("%d\n", sum);
	return (0);
}
