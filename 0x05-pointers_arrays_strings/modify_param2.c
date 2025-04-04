#include <stdio.h>

/**
 * modify_param2 - modifies the value of n in main function
 *
 * @*m - pointer to adress of n
 *
 * Return: void
 */

void modify_param2(int *m)
{
	
	printf("value of *m is %d\n", *m);
	printf("Address of *m is %p\n", &*m);

	*m = 450;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 85;
	int *p = &n;

	printf("Value of n is currently %d\n while is address is %p\n", n, &n);
	printf("value of *p is currently %d\n while its address is %p\n", *p, &*p);

	modify_param2(p);

	printf("Now the value of n is %d\n and its address is %p\n", n, &n);

	return (0);
}
