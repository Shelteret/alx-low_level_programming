#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @d: copy to
 * @s: copy from
 * Return: string
 */
char *_strcpy(char *d, char *s)
{
	int c = 0;

	for (; s[c] != '\0'; c++)
	{
		d[c] = s[c];
	}
	return (d);
}
