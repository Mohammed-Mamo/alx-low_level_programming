#include <stdio.h>
/**
 * main
 * somecodes
 * Return :0 (Succes)
 */

int main(void)
{

char x; int y;long int z;long long int w;float T;
/**
 * printinting size of different data types
 */
printf("size of a char: %lubyte(s)\n",(unsigned long)sizeof(x));
printf("Size of an int: %lubyte(s)\n",(unsigned long)sizeof(y));
printf("Size of a long int: %lubyte(s)\n",(unsigned long)sizeof(z));
printf("Size of a long long int:%lubyte(s)\n",(unsigned long)sizeof(w));
printf("Size of a float: %lubyte(s)\n",(unsigned long)sizeof(T));

return (0);

}
