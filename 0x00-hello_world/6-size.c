#include <stdio.h>

/**
* main -Entry point
*
* Return: Always 0
*/

int main(void)
{
puts("size of a char: %lu byte(s)", sizeof(char));
puts("size of an int: %lu byte(s)", sizeof(int));
puts("size of a long int: %ld byte(s)", sizeof(long int));
puts("size of a long long int: %lld bytes(s)", sizeof(long long int));
puts("size of a float: %f byte(s)", sizeof(float));

return (0);
}
