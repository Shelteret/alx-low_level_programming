#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @x: array name
 * @y: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *x, int y)
{
	int c;

	for (c = 0; c < (y - 1); c++)
		printf("%d, ", x[c]);
	if (c == (y - 1))
		printf("%d", x[y - 1]);
	printf("\n");
}
