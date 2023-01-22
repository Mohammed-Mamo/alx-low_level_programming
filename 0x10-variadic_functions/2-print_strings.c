#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function
 * @separator: string to be printed
 * @n: number of strings
 * @...: others
 * Retun: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	char *string;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		
		if (separator == NULL)
			continue;
		if (j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
