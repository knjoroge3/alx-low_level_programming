#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Description: Prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a <= 8)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0');
			_putchar('$');
		}
		a++;
	}
	_putchar('\n');
}
