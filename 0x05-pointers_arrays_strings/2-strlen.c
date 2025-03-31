#include "main.h"

/**
 * _strlen - counts the size of the characters
 *
 * @s: Contains the size of characters in *str
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
