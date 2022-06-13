#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @x: input 1
 * @y: input 2
 * Return: integers
 */
void swap_int(int *x, int *y)
{
	int a;

	a = *x;
	*x = *y;
	*y = a;
}
