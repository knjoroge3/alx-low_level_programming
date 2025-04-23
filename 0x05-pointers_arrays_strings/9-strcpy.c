#include "main.h"

/**
 * _strcpy - copies one string to another pointer
 *
 * @dest: The destination of the pointer
 * @src: the source of the pointer
 *
 * Return: Destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
