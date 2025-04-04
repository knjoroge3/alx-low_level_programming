#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zero
 */

int main(void)
{
	char c = 'k';
	int num = 23;

	printf("the value of c is %c\n", c);
	printf("the address of c is %p\n", &c);
	printf("the value of num is %d\n", num);
	printf("the address of num is %p\n", &num);

	return (0);
}
