#include "main.h"

/**
 *
 *
 *
 */
int swap(int *, int *);

int main(void)
{
	int a = 10, b = 20;

	printf("The value of a is %d, and its address is %p\n", a, (void *)&a);
	printf("The value of b is %d, and its address is %p\n", b, (void *)&b);

	swap(&a, &b);

	printf("Now the value of a is %d, and its address is %p\n", a, (void *)&a);
	printf("Now the value of b is %d, and its address is %p\n", b, (void *)&b);

	return (0);
}
