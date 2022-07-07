#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: input
 * @n: input
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = = va_arg(list, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

