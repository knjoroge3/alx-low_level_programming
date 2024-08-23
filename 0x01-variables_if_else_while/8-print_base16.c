/**
*main - Entry point
*
*Return: always success (0)
*/

#include <stdio.h>

int main(void)
{
int a = 0;
char b = 97;

while (a >= 0 && a <= 9)
{
putchar('0' + a);
a += 1;
}
while (b >= 97 && b <= 103)
{
putchar(b);
b += 1;
}
putchar('\n');

return (0);
}
