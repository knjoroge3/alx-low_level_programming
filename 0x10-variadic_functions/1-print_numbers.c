#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: the number of variadic functions
 *
 * Return: void
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i, j = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, unsigned int);

		printf("%d", j);

		if ((i < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
