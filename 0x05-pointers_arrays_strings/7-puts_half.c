#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, n, c;

	c = 0;

	for (i = 0; str[i] != '\0'; i++)
		c++;

	n = (c / 2);

	if ((c % 2) == 1)
		n = ((c + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
