#include "main.h"

/**
 * print_line - prints (-)
 * @n: the number of times to print (-)
 *
 * Return: Number of times to print (-)
 */

void print_line(int n)
{
	for (; n-- > 0;)
	{
		_putchar('_');
	}
	_putchar('\n');
}
