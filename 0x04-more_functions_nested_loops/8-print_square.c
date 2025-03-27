#include "main.h"

/**
 * print_square -prints a square
 * @size: the Size of the Square
 * @row: how big the square is on the horizontal side
 * @col: how big the square is on the vertical side.
 *
 * Return: Void
 */

void print_square(int size)
{
	int row, col;

	for (; size > 0; size++)
	{
		_putchar('#');
		_putchar('\n');
	}
}
