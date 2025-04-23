#include "main.h"

/**
 * print_array - prints the elements in the array
 *
 * @a: Pointer to the array
 * @n: Elements in the array to be printed
 *
 * Return: Void
 */

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");

}
