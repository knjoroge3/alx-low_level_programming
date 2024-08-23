/**
*main - Entry point
*
*Return: Always 0 (success)
*/
#include <stdio.h>

int main(void)
{
char a = 122;

while (a <= 122 && a >= 97)
{
putchar(a);
a -= 1;
}
putchar('\n');
return (0);
}
