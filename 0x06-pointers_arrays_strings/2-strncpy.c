#include "main.h"

/**
 * _strncpy - Copies strings as they appear
 *
 * @dest: Destination pointed to after copying the string
 * @src: The string to be copied
 * @n: The numbers of characters that when used should be copied
 *
 * Return:Destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
