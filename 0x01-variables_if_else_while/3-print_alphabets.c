/**
*main - Entry point
*
*Return: Always 0 (success)
*/
#include <stdio.h>

int main(void)
{
char a = 97, b = 65;

while (a >= 97 && a <= 122)
{
putchar(a);
a += 1;
}
while (b >= 65 && b <= 90)
{
putchar(b);
b += 1;
}
putchar('\n');
return (0);
}
