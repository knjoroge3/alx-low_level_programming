#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always zero
 */

int main(void)
{
	int n = 98;
	int *p = &n;

	printf("The value of n is %d\n", n);
	printf("The addres of n is %p\n", &n);
	printf("The value of *p is %d\n", *p);
	printf("The address of *p is %p\n", &*p);
	
	*p = 402;

	printf("The value of n has now changed to %d\n", n);

	return (0);
}
