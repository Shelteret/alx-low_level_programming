#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: input
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...);
{
	unsigned int a;
	va_list list;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for  (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
