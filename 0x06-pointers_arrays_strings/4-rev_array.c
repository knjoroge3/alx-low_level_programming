#include "main.h"

/**
 * reverse_array - Swaps the aelements in array to reverse them
 *
 * @a: Pointer to the array a[]
 * @n: The number the array can hold at any given time
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp = 0;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

		i++;
		j--;
	}
}

