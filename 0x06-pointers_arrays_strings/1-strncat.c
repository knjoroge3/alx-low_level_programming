#include "main.h"

/**
 * _strncat - Concatenates two strings but the sorce file has n as the number
 *
 * @dest: destination file
 * @src: Source code
 *
 * @n: the number of characters to check source
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}


	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
