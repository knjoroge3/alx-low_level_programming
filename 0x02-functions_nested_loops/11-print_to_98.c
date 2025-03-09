#include "main.h"

/**
 * print_to_98 - prints all natural numbers passed
 * to this function in order
 *
 * @n: integer to number 98;
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	while (n = 98)
	{
		if (n < 0)
		{
			_putchar((n * -1) + '0');
		}
		else if (n >= 0)
		{
			_putchar(n + '0');
		}
		n++;

		else if (n > 98)
		{
			_putchar(n + '0');
		}
		n--;
	}
	_putchar('\n');
	return (0);
}

