#include <stdio.h>

/**
 * main - Prints both lowercase and uppercase alphabets
 *
 * Return: 0 Always
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
