#include "main.h"

/**
 * swap_int - Swaps the values of a and b
 *
 * @a: The first value
 * @b: The second Value
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
