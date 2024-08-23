/**
*main - Entry point
*
*Return: Always 0 (success)
*/

#include <stdio.h>

int main(void)
{
int a = 0;

while (a >= 0 && a < 10)
{
putchar('0' + a);
a += 1;
if (a <= 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
