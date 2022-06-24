#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @x: char input
 * Return: length of the input string
 */
int _strlen(char *x)
{
	int i = 1, j = 0;
	char y = x[0];

	while (y != '\0')
	{
		j++;
		y = x[i++];
	}
	return (j);
}
