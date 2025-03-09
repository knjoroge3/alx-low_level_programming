#include "main.h"

/**
 * print_to_98 - prints all natural numbers passed
 * to this function in order
 *
 * @n: integer to number 98;
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 0)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n >= 0)
	{
		while (n <= 98)
		{
			printf("%d", n);
			
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		
	}
	printf("\n");
}
