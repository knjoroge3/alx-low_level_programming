#include "main.h"

/**
 * print_triangle -prints a triangel
 * @size: How long the triangle should be
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int col;

	for (; size-- > 0;)
	{
		for (col = 0; col <= size; col++)
		{
			_putchar(' ');
		}
		if (size != 0)
		{
			_putchar('#');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
