#include "main.h"

int factorial(int);

int main(void)
{
	int a = 5;
	int f = factorial(a);

	printf("The value of a is %d\n", a);
	printf("The factorial of a is %d\n", f);

	return (0);
}
