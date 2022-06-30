#include <stdlib>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, c_1, c_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (c_1 = 0; c_1 < i; c_1++)
		arr[c_1] = s1[c_1];
	for (c_2 = 0; c_1 < j; c_2++)
	{
		arr[c_1] = s2[c_2];
		c_1++;
	}
	c_1++;
	arr[c_1] = '\0';
	return (arr);
}
