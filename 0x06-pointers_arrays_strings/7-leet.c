#include "main.h"

/**
 * leet - ecodes the code for 
 *
 * str: Pointer to the string being encoded
 *
 * Return: Pointer to character
 */

char *leet(char *str)
{
	char *i = str;

	while (*i == 'a')
	{
		*i = 4;
	}
	while (*i == 'A')
	{
		*i = 4;
	}
	while (*i
