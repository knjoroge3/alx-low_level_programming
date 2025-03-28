#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zero
 */

int main(void)
{
	int n;

	printf("Size of 'char' im my computer is: %lu bytes\n", sizeof(char));
	printf("size of 'int' in my computer is : %lu bytes\n", sizeof(int));
	printf("size of 'float' in my computer is : %lu bytes\n", sizeof (float));
	printf("size of variable n in my computer is: %lu bytes\n", sizeof (n));

	return (0);
}
