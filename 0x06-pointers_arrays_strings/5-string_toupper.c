#include "main.h"

/**
 * string_toupper - changes the string in array frm lower case to upper
 *
 * @str: Pointer to the array of string
 * Return: Character
 */

char *string_toupper(char *str)
{
	char *i = str;

	while (*i != '\0')
	{
		if (*i >= 'a' && *i <= 'z')
		{
			*i = *i - 32;
		}
		i++;
	}
	return (str);
}
