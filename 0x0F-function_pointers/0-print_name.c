#include "function_pointers.h"

/**
 * print_name - calls a function pointer
 *
 * @name: the 1st argument passed
 * @f: pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
	{
		return;
	}

	f(name);
}
