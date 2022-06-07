#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number
 * @n: last digit of the given number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int k;

	k = (n % 10);

	if (k < 0)
	{
		k = (-1 * k);
	}

	_putchar(k + '0');
	return (k);
}
