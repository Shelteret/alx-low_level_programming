#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s);
{
	char r = s[0];
	int n = 0;
	int i;

	while (s[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		n--;
		r = s[i];
		s[i] = s[n];
		s[n] = r;
	}
}
