/**
*main - Entry point
*
*Return: Always 0 (success)
*/
#include <stdio.h>

int main(void)
{
int a = 0, b, c;

while (a <= 8)
{
b = a + 1;

while (b <= 9)
{
c = b + 1;

while (c <= 9)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
putchar(',');
putchar(' ');

c++;
}
b++;
}
a++;
}
putchar('\n');

return (0);
}

