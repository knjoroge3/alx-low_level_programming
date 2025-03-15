#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: The number of spaces to be printed before printing \
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	for (; n-- > 0; )
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
