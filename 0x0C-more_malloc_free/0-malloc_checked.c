#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the size to be allocated
 *
 * Return: Pointer returned by malloc
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return (i);
}
