#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: a pointer
 *  @size: size
 *  Return: void
 */

void print_diagsums(int *a, int size)
{
	int c, d, s1 = 0, s2 = 0;

	for (d = 0, c = size - 1; d < (size * size); d += size + 1, c += size - 1)
		s1 += a[d], s2 += a[c];
	printf("%d, %d\n", s1, s2);
}
