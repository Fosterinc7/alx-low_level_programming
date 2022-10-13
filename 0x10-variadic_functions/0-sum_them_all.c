#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the given arguments
 * @n: constant integer variable
 * Return: sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start (ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
