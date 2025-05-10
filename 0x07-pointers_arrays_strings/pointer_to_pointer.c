#include <stdio.h>

/**
 * main - Entry point
 *
 * @a: an integer variable
 * @ptr: Points to the variable
 * @dbptr: a pointer to a pointer
 *
 * Return: Always (0)
 */

int main(void)
{
	int a = 98;
	int *ptr = &a;
	int **dbptr = &ptr;	

	printf("The value of a is %d and its address is %p\n", a, (void *)&a);
	printf("The value of pointer (ptr) is %p, it points to %d and  its address is %p\n",\
			(void *)ptr, *ptr,(void *)&ptr);
	printf("The value of dbptr is %p, it points to %d and its address is %p\n",\
			(void *)dbptr, **dbptr, (void *)&dbptr);

	return (0);
}
