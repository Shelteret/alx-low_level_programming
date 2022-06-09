#include <stdio.h>

/**
 * main - prime factors of 612852475143
 *
 * Return: int
 */
int main(void)
{
	unsigned long n, c, max;

	n = 612852475143;
	max = 1;

	for (c = 3; c <= n; c += 2)
	{
		while (n % c == 0)
		{
			max = n;
			n = n / c;
		}
	}
	printf("%lu\n", max);
	return (0);
}
