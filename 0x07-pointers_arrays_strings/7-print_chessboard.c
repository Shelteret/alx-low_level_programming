#include "main.h"

/**
 * _chessboard - prints the chessboard.
 * @a: matrix
 * Return: nothing
 */

void print_chessboard(char (*a)[8]);
{
	int c, d;

	for (c = 0; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(*(*(c + a) + d));
		}
		_putchar('\n');
	}
}
