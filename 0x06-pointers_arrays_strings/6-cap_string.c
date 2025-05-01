#include "main.h"

/**
 * cap_string - Capitalizes the first letter of a word after a separator
 *
 * @str: Pointer to the string
 *
 * Return: Pointer to a character array(string)
 */

char *cap_string(char *str)
{
	char *i = str;
	int j = 1;

	while (*i != '\0')
	{
		if (*i == ' ' || *i == '\'' || *i == ';' || *i == '.' || *i == '?' || *i ==\
				'!' || *i == '"' || *i == '(' || *i == ')' || *i == '{' || *i == '}' || *i == '\t' || *i == '\n')
		{
			j = 1;
		}
		else if (j && *i >= 'a' && *i <= 'z')
		{
			*i = *i - 32;
			j = 0;
		}
		else
		{
			j = 0;
		}

		i++;
	}
	return (str);
}
