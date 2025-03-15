#include "main.h"

/**
 * _isdigit - Returns 1 if c is a digit
 * @c: the digit to be checked
 *
 * Return: returns 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
