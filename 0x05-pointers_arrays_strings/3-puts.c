#include "main.h"

/**
 * _puts - puts all characters in the string
 *
 * @str: the string to be written in stdout
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
	_puts('\n');
}
