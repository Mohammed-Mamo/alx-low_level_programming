#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - is function
 * @separator: is separating character between numbers
 * @n: is total number to be printed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 0;
	va_list ap;

	va_start(ap, n);
	for (; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
		if (separator == NULL)
			continue;
		if (j < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
