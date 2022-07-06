#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Show the result from an operation of two integers
 * @argc: How many arguments I have
 * @argv: My string of strings
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int a, b, final;

		if (*argv[1] >= '0' && *argv[1] <= '9')
			a = atoi(argv[1]);

		else
		{
			printf("Error\n");
			exit(98);
		}
		if (*argv[3] >= '0' && *argv[3] <= '9')
			b = atoi(argv[3]);
		else
		{
			printf("Error\n");
			exit(98);
		}
		/*direct the results and the traded to match to redirect*/
		final = (*get_op_func(argv[2]))(a, b);
		printf("%d\n", final);
		return (0);
	}
	printf("Error\n");
	exit(98);
	return (0);
}
