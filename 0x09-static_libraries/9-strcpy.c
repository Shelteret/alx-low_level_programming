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

	while (c >= 0)
	{
		*(d + c) = *(s + c);
		if (*(s + c) == '\0')
			break;
		c++;
	}
	return (d);
}
