#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: copy to
 * @src: second string
 * @n: input
 * Return: Copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		if (c < n)
			dest[c] = src[c];
		while (c < n)
			dest[c++] = '\0';

	return (dest);
}
