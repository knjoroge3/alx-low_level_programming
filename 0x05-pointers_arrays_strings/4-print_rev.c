#include "main.h"

/**
 * print_rev - prints the string in reverse
 *
 * @s: the string to be reversed
 *
 * Return: Void
 */

void print_rev(char *s)
{
	char *i = s;

	while (*i != '\0')
	{
		i++;
	}

	while (i > s)
	{
		i--;
		_putchar(*i);
	}
	_putchar('\n');
}
