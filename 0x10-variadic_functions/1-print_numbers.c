#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: input
 * @n: input
 * Return: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

