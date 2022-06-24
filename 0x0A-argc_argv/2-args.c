#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * @argc: arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%d\n", argv[x]);
		x++;
	}
	return (0);
}
