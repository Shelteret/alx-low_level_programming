#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: Diagonal line
 */

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d < c; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
