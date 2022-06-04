#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d, f, g;

	for (c = 48; c <= 57; c++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (f = 48; f <= 57; f++)
			{
				for (g = 48; g <= 57; g++)
				{
					if (((f + g) > (c + d) && f >= c) || c < f)
					{
						putchar(c);
						putchar(d);
						putchar(' ');
						putchar(f);
						putchar(g);
					if (c + d + f + g == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
