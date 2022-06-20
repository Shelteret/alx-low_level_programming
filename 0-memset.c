#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: input pointer
 * @b: char
 * @n: number of bytes
 * Return: s to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
