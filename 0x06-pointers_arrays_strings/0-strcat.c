#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string
 * @src: The strings to be concatenated
 *
 * Return: Destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
