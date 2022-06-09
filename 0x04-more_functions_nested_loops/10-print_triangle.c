#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: sets the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int c, d;

	if (size > 0)
		for (c = size; c > 0; c--)
		{
			for (d = 1; d <= size; d++)
				if (d >= c)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
