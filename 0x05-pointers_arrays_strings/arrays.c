#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a[5];

	a[0] = 015;
	a[1] = 232;
	a[2] = 343;
	a[3] = 345;
	a[4] = 353;

	printf("value of a[0] is %d\n", (a[0]));
	printf("Value of a[1] is %d\n", (a[1]));
	printf("Value of a[2] is %d\n", (a[2]));
	printf("Value of a[3] is %d\n", (a[3]));
	printf("value of a[4] is %d\n", (a[4]));
	printf("address of a[0] is %p\n", &(a[0]));
	printf("address of a[1] is %p\n", &(a[1]));
	printf("address of a[2] is %p\n", &(a[2]));
	printf("address of a[3] is %p\n", &(a[3]));
	printf("address of a[4] is %p\n", &(a[4]));

	return (0);
}
