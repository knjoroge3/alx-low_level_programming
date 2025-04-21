#include "main.h"

/**
 * puts2 - Prints characters in every second place
 *
 * @str: The string that is printed
 *
 * Return: Void
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
