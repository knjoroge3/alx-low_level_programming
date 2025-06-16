#include "main.h"

/**
 * _strdup - Returns a memory location with a copy of a pointer
 *
 * @str:  the string that is copied to the malloc pointer
 *
 * Return: The pointer to the new memory allocation
 */

char *_strdup(char *str)
{
	char *_str;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	_str = malloc(sizeof(char) * (len + 1));

	if (_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_str[i] = str[i];
	}

	_str[i] = '\0';

	return (_str);
}
