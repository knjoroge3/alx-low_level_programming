#include "main.h"

/**
 * create_array - Creates an array of a particular size
 *
 * @size: Size of the char
 * @c: The char of passed to the function
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
