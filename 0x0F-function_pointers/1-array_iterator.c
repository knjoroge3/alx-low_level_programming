#include "function_pointers.h"

/**
 * array_iterator - Function name
 *
 * @array: the array to go through
 * @size: Size of the array
 * @action: Name of the function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
