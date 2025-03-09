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
	int a, b, c;
	
	a = 0;

	while (a <= 9)
	{
		b = 0;
		
		while (b <= 9)
		{
			c = a * b;

			if (c <= 9)
			{
				if (b <= 8)
				{

					_putchar(c + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(c + '0');
					_putchar('$');
				}
			}
			else
			{
				if (b <=  8)
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
					_putchar('$');
				}
			}
			b++;
		}
		_putchar('\n');
		a++;
	}

}
