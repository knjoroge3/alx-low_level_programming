#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: The number of spaces to be printed before printing \
 * @i: The number to increment spaces before the \
 * @row: the row for printing backslashes
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, row;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (row = 0; row < n; row++)
	{

	for (i = 0; i < row; i++)
	{
		_putchar(' ');
	}

	_putchar('\\');

	_putchar('\n');
	}
}

