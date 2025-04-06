#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Zero
 */

int main(void)
{
	int a[5];
	int *p;
	int *p2;

        printf("The address of the array a is %p\n", &a);
        printf("The address of the pointer p is %p\n", &*p);
        printf("The address of the second pointer is %p\n", &*p2);


	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;

	printf("the value of the 1st element is %d and its address is %p\n", *a, &*a);
	printf("The value of the 2nd element is %d and its address is %p\n", *(a + 1), &*(a + 1));
	printf("The value of the 3rd element is %d and its address is %p\n", *(a + 2), &*(a + 2));
	printf("The value of the 4th element is %d and its address is %p\n", a[3], &a[3]);
	printf("the value of the 5th elemnt is %d and its address is %p\n", *(a + 4), &*(a + 4));
	printf("Now p has the value %d and its address is %p\n", *p, &*p);
	printf("Now the value has been changed for the 1st element and it is %d and its address is %p\n", *p, &*p);
	printf("Now the value in p2 is %d and its address is %p\n", *p2, &*p2);
	printf("The vlaue in the pointer two is %d and its address is %p\n", *p2, &*p2);

	return (0);
}
