#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all -s function
 * to add all arguments
 * @n: number of arguments
 *
 * Return:the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, int);
	printf("\n");
	va_end(ap);
	return (sum);
}
