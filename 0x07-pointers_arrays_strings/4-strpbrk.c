#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: characters
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
