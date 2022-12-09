#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry to the code
 * body
 * Return: 0 (Succes) 
 */

int main(void)

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n==0)
printf("is zero\n");
if (n>0)
printf("is positive");
else
	printf("is negative");
return (0);
}
