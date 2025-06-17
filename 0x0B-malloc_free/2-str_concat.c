#include "main.h"

/**
 * str_concat - Concatenates two strings
 *
 * @s1: first string
 * @s2: Second string
 *
 * Return: The pointer with the conncatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, k = 0, l;
	char  *str1;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}

	str1 = malloc(sizeof(char) * (k + j + 1));

	if (str1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str1[i] = s1[i];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		str1[i] = s2[l];
		i++;
	}

	str1[i] = '\0';
	return (str1);
}
