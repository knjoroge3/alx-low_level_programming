#include "main.h"

/**
 * array_range - creates an array
 *
 * @min: one element
 * @max: second element
 *
 * Return: array_range
 */

int *array_range(int min, int max)
{
	int *i, j, k;

	if (min > max)
	{
		return (NULL);
	}

	k = max - min + 1;

	i = malloc(sizeof(int) * k);

	if (i == NULL)
	{
		return (NULL);
	}

	else
	{
		for (j = 0; j < k; j++)
		{
			i[j] = min + 1;
		}
	}

	return (i);
}
