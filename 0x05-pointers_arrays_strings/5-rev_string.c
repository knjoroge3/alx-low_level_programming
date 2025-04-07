#include "main.h"

/**
 * rev_string - Reverses the string in the main function
 *
 * @s: the string to be reversed
 *
 * Return: Void;
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char k;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;

		i++;
		j--;
	}
}
