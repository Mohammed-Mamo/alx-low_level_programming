#include <stdio.h>
/**
 * main - display fibonacci number less than 98
 * it return 0
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0 always succes
 */
int main(void)
{
	int i;

	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);
for (i = 2; i < 50; i++)
{
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
if (i == 49)
printf("%ld\n", fibonacci[i]);
else
printf("%ld, ", fibonacci[i]);
}
return (0);
}
