/**
*main - Entry point
*
*Return: Always 0 (success)
*/
#include <stdio.h>

int main(void)
{
char a = 97;

while (a >= 97 && a <= 122)
{
putchar(a);
a += 1;
}
putchar('\n');
return (0);
}
