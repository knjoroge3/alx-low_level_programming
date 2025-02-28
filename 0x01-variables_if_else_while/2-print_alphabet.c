#include <stdio.h>

/**
*main - Entry point
*
*Return: Always (0)
*/

int main(void)
{
int a = 97;

do {
putchar(a);
a++;
} while (a <= 122);

putchar('\n');

return (0);
}
