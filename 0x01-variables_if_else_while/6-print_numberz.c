#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0
*
*programme that prints all single digits of base 10
*you can only use putchar twice and not allowed to use
*variable of typpe char
*/

int main(void)
{
int a = 48;

while (a <= 57)
{
putchar(a);
a++;
}
putchar('\n');

return (0);
}
