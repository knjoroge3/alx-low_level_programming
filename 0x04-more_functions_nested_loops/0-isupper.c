#include "main.h"

/**
 * _isupper - Checks if c is Upper case and returns 1
 *
 *@c: the character to be checked
 *
 * Return: 1 if C is uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{

		return (0);
	}
}
