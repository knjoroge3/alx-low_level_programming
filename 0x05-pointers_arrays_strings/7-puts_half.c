#include "main.h"

/**
 * puts_half - prints the second hal of the string
 *
 * @str: String that is divided then printed
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int i = 0, result, number;

	for (; str[i] != '\0'; i++)
	{
	}

	result = i;

	if (result % 2 == 0)
	{
		number = result / 2;

		for (; number <= result; number++)
		{
			_putchar(str[number]);
		}
		_putchar('\n');
	}
	else
	{
		number = ((result - 1) / 2);
		{
			for (; number <= result; number++)
			{
				_putchar(str[number]);
			}
			_putchar('\n');
		}
	}
}
