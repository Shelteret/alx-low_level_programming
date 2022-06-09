#include "main.h"

#include <stdio.h>

/**
 * print_number - prints int with putchar
 * @n: takes number
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}
	else
	{
		c = n;
	}
	if (c / 10 != 0)
		print_number(c / 10);
	_putchar((c % 10) + '0');
}
