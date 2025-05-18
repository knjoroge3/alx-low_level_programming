#include "main.h"

/**
 * 
 *
 *
 *
 */

int swap(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;

	printf("The value of x is %d and its address is %p\n", *x, (void *)&*x);
	printf("The value of y is %d and its address is %p\n", *y, (void *)&*y);

	return (0);
}
