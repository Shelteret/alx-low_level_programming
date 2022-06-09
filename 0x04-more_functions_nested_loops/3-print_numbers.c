#include "main.h"

/**
 * print_numbers - function that prints the numbers
 * Return: 0 to 9, followed by a new line.
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		-putchar(c + '0');
	_putchar('\n');
}
