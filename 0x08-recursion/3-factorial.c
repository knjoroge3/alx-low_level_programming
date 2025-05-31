#include "main.h"

/**
 * factorial - prints the factorial of a given number
 *
 * @n: The number passed to the fucntion by value
 *
 * Return: The result of the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
