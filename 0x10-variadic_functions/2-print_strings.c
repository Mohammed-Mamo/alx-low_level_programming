#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - print string
 * @separatpor: separation
 * @n: total string count
 * @...: remaining arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s = 0;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (; s < n; s++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (s < n -1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
