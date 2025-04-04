#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always zero
 */

int main(void)
{
	printf("to see what this code does, I have created a readme file for it\n\n\n");

	int array[3];

	printf("The value of variable array is %p\n", &array);
	printf("the address of array[0] is %p\n", &array[0]);

	return (0);
}
