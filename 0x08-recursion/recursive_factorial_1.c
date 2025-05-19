#include "main.h"

/**
 * This now shows the recursive form of
 * factorial_1.c function
 */

int factorial(int x)
{
	if (x <= 1)
	{
		return (1);
	}
	else
	{
		return (x * factorial(x - 1));
	}
}
