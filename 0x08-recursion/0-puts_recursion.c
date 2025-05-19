#include "main.h"

/**
 * _puts_recursion - prints an array of strings recursively
 *
 * @s: The variable storing the starting point of the array
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
