#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input
 * @n: input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *c, i, j, k;

	c = a;

	for (i = 1; i < n; i++)
	{
		c++
	}

	for (k = 0; k < i / 2; k++)
	{
		j = a[k];
		a[k] = *c;
		*c = j;
		c--;
	}
}
