#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zero
 */

int main(void)
{
	int i[5];

	*i = 96;
	*(i + 1) = 32;
	*(i + 2) = 53;
	*(i + 3) = 423;
	*(i + 4) = 232;

	printf("The value of the 1st element is %d and its address is %p\n", *i, &*i);
	printf("The value of the 2nd element is %d and it address is %p\n", *(i + 1), &*(i + 1));
	printf("The value of the 3rd element is %d and it address is %p\n", *(i + 2), &*(i + 2));
	printf("The value of the 4th element is %d and it address is %p\n", *(i + 3), &*(i + 3));
	printf("The value of the 5th element is %d and it address is %p\n", *(i + 4), &*(i + 4));

	return (0);
}
