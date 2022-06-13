#include "main.h"

/**
 * puts2 - prints only one character out of two starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int c = 0;

	for (; str[c] != '\0'; c++)
	{
		if ((c % 2) == 0)
			_putchar(str[c]);
		else
			continue;
	}
	_putchar('\n');
}
