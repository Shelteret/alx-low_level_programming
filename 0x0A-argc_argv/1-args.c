#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * @argc: arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
	}
	printf("%d\n", x - 1);
	return (0);
}
