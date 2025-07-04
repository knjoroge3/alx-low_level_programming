#include "variadic_functions.h"

/**
 * sum_them_all - sums all the numbers given
 *
 * @n: a constant unsigned argument.
 *
 * Return: Sum_them_all
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, j = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		j += va_arg(args, unsigned int);
	}

	va_end(args);

	return (j);
}
