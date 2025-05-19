#include "main.h"

int factorial(int x)
{
	int f = 1;

	for (x = 5; x >= 1; x--)
	{
		f *= x;
	}
	return (f);
}
