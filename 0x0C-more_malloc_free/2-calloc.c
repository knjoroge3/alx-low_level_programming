#include "main.h"
#include <string.h>

/**
 * _calloc - returns a pointer to a memory location assigned by malloc
 *
 * @nmemb: the array that will be passed
 * @size: Unsigned integer of size size
 *
 * Return: _calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	i = malloc(nmemb * size);

	if (i == 0)
	{
		return (NULL);
	}
	else
	{
		memset(i, 0, nmemb * size);
	}

	return (i);
}
