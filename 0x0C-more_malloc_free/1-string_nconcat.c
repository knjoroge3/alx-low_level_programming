#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: Number of memory bytes to be allocated
 *
 * Return: The pointer to malloc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0, len2 = 0;
	char *str1;
	unsigned int copy_len = (n < len2) ? n : len2;

	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str1 = malloc(len + copy_len + 1);
	if (str1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str1[i] = s1[i];
	}
	if (n >= len2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			str1[i] = s2[j];
			i++;
		}
		str1[i] = '\0';
	}
	else
	{
		for (j = 0; (j < n) && (s2[j] != '\0'); j++)
		{
			str1[i] = s2[j];
			i++;
		}
		str1[i] = s2[j];
	}
	return (str1);
}
