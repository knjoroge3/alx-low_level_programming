#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 43;
	int *p = &n;

	printf("the value of n is %d\n", n);
	printf("the address of n is %p\n", &n);
	printf("The address of p is %p\n", &*p);
	printf("The value of p is %d\n", *p);

	return (0);
}
