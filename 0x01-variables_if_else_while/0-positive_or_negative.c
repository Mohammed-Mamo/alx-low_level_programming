#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Entry to the code
*body
*Return: 0 (Succes) 
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%lu is positive \n", n);
if (n < 0)
printf("%lu is negative \n", n);
else
printf("%lu is zero \n", n);

return (0);
}
