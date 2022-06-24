#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - entry
 * @argc: arguments
 * @argv: arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc < 0)
		return (0);

	for (x = 1; x < argc; x++)
	{
		if (!atoi(argv[x]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);

	return (0);
}
