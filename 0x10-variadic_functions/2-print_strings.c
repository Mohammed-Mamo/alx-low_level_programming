#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_strings - print string
 * @separatpor: separation
 * @n: total string count
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int s = 0;
	va_list ap;
	va_start(ap, n);

	while (s < n)
	{
		if (va_arg(ap, n) == NULL)
			printf("nil");
		printf("%s", va_arg(ap, n));
		if (s < n -1)
			printf("%", separator);
		s++;
	}
	va_end(ap);
	printf("\n");
}
