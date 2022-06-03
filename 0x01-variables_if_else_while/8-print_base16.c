#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}

	putchar('\n');

	return (0);
}
