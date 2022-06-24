#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: bytes used from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
