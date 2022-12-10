#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

 int main(void)
{

int N;
char L;
for (N = '0'; N <= '9'; N++)
	putchar(N);
for (L = 'a'; L <= 'f'; L++)
putchar(L); 
putchar('\n');

return (0);
}
