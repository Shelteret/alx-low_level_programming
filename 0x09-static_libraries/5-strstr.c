#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string location
 * @needle:location of matching string
 * Return: pointer of frist char
 */

char *_strstr(char *haystack, char *needle)
{
	char *t = haystack, *s = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (t);
		}
		needle = s;
		t++;
		haystack = t;
	}
	return (0);
}
