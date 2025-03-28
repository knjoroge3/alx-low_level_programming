#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 98;
	int *p = &n;

	printf("value of n is %d\n", n);
	printf("The address of n is %p\n", &n);
	printf("the address of p is %p\n", &p);
	printf("The value of p is %p\n", p);
	*p = 505;
	printf("The new value of n is %d\n", n);

	return (0);
}
