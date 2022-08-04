#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function name
 *
 * @n: count argument varible name
 *
 * Return: Sum of all argument
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;
	va_list args;
	if (n == 0)
		return (0);
	va_start(args, n);
}
