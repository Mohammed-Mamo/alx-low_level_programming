#include <stdio.h>
#include <unistd.h>
/**
 * main - function that outputs a _putchar
 * Return :0 is required
 */

int main(void)
{
	char mystring[8] = "_putchar";
	fputs("%s\n", mystring);
	
	return (0);
}

