#include "_putchar.h"
/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: 0 if success
 */
int main(void)
{
	char a = "_putchar";

	while (a)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

	return (0);
}
