#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return - 0 if success
 */
void print_alphabet(void);
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}

	_putchar('\n');
}
