#include <stdio.h>

/**
 * modify_param - contains the value to be try and modify
 * @m: the value to modify
 *
 * Return: Void
 *
 */

void modify_param(int m)
{
	m = 354;
	printf("The value of m though in local variable is %d\n", m);
}

/**
 * main - entry point
 *
 * Return: Always zero
 */

int main(void)
{
	int n = 98;

	modify_param(n);

	printf("The value of n is %d\n", n);

	return (0);
}
