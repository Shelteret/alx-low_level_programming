#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: decrypted string
 */
char *rot13(char *s)
{
	int i, rot_a = 13, j = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
		'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
		'Z', 'm', 'z'};

	while (s[j] != '\0')
	{
		for (i = 0; i <= 51; i++)
		{
			if (s[j] == toswap[i])
			{
				s[j] = s[j] + rot_a;
				i = 51;
			}
			rot_a = rot_a * -1;
		}
		j++;
	}
	return (s);
}
