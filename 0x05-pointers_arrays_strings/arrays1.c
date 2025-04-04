#include <stdio.h>

/** main - Entry point 
 *
 * Return: Always 0
 */

int main(void)
{
	int array[5];

	array[0] = 567;
	array[1] = 54;
	array[2] = 453;
	array[3] = 674;
	array[4] = 98;

	printf("The value of the first element is %d and its address is %p\n", array[0], &array[0]);
	printf("The value of the second element is %d and its address is %p\n", array[1], &array[1]);
	printf("The value of the third  element is %d and its address is %p\n", array[2], &array[2]);
	printf("The value of the fourth element is %d and its address is %p\n", array[3], &array[3]);
	printf("The value of the fifth element is %d and its address is %p\n", array[4], &array[4]);

	return (0);
}
