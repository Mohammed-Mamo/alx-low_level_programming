#include <stdio.h>
int main (void)
{
	char x0;
	int x1;
	long int x2;
	long long int x3;
	float x4;
	printf("\nsize of a character:%lubyte(s)",(unsigned long)sizeof(x0));
	printf("\nsize of an integer:%lubyte(s)",(unsigned long)sizeof(x1));
	printf("\nsize of a long int:%lubyte(s)",(unsigned long)sizeof(x2));
	printf("\nsize of a long long int:%lu in bytes ",(unsigned long)sizeof(x3));
	printf("\nsize of float:%lubyte(s)",(unsigned long)sizeof(x4));
	return 0;
}
