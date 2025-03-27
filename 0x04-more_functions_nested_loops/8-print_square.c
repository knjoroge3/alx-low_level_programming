#include "main.h"

/**
 * print_square -prints a square
 * @size: the Size of the Square
 *
 * Return: Void
 */

void print_square(int size)
{
	int col, row;

	for (row = size; row > 0; row--)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
