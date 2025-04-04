#include <stdio.h>

int main(void)
{
	int a = 25;

	int *b = &a;


	printf("value of a is %d\n", a);
	printf("value of a is %d\n", *b);

	return (0);
}
