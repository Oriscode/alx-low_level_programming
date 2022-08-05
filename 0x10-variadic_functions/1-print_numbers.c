#include "variadic_functions_h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function name
 *
 * @separator: string received between nums
 * @n: total number of argument received
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
